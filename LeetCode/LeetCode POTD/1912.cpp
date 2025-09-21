#include <bits/stdc++.h>
using namespace std;

class MovieRentingSystem {
public:
    set<vector<int>> rented;
    unordered_map<int, set<vector<int>>> unRented;
    unordered_map<int,unordered_map<int,int>> priceMap;
    
    MovieRentingSystem(int n, vector<vector<int>>& entries) {
        for(auto i: entries){
            int shop = i[0];
            int movie = i[1];
            int price = i[2];

            unRented[movie].insert({price,shop});
            priceMap[movie][shop] = price;
        }
    }
    
    vector<int> search(int movie) {
        if(unRented.find(movie) != unRented.end()) return {};
        vector<int> shops;  
        for(auto i : unRented[movies]){
            shops.push_back(i[1]);
            if(shops.size() == 5) break;
        }
        return shops;
    }
    
    void rent(int shop, int movie) {
        int price = priceMap[movie][shop];
        unRented[movie].erase(unRented[movie].find({price,shop}));

        rented.insert({price,shop,movie});
    }
    
    void drop(int shop, int movie) {
        int price = priceMap[movie][shop];
        rented.erase({price,shop,movie});
        unRented[movie].insert({price,shop});
    }
    
    vector<vector<int>> report() {
        vector<vector<int>> result;
        for(auto i: rented){
            result.push_back({i[1],i[2]});
            if(result.size() == 5) break;
        }
        return result;
    }
};

