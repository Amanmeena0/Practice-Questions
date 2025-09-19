#include <bits/stdc++.h>
using namespace std;

// brute force approach by usign matrix

class Spreadsheet
{
public:
    vector<vector<int>> sheet;

    Spreadsheet(int rows)
    {
        while (rows--)
        {
            vector<int> row(26);
            sheet.push_back(row);
        }
    }

    void setCell(string cell, int value)
    {
        int i = cell[0] - 'A';
        string m = cell.substr(1, cell.size() - 1);
        int j = stoi(m);
        sheet[j - 1][i] = value;
    }

    void resetCell(string cell)
    {
        int i = cell[0] - 'A';
        string m = cell.substr(1, cell.size() - 1);
        int j = stoi(m);
        sheet[j - 1][i] = 0;
    }

    int getValue(string formula)
    {
        int ans = 0;
        int n = formula.find('+');
        string s1 = formula.substr(1, m - 1);
        string s2 = formula.substr(m + 1, formula.size() - 1);
        ans += getSum(s1);
        ans += getSum(s2);

        return ans;
    }
    int getSum(string s)
    {
        int ans = 0;
        int reuslt = 0;
        if (s[0] >= 'A')
        {
            int i = s[0] - 'A';
            string m = s.substr(1, s.size() - 1);
            int j = stoi(m);
            ans += sheet[j - 1][i];
        }
        else
        {
            ans += stoi(s);
        }
        return ans;
    }
};

// optimized approach by using unordered_map

class Spreadsheet
{
public:
    unorderd_map<string, int> sheet;

    Spreadsheet(int rows)
    {
    }

    void setCell(string cell, int value)
    {
        sheet[cell] = value;
    }

    void resetCell(string cell)
    {
        sheet[cell] = 0;
    }

    int getValue(string formula)
    {
        int m = formula.find('+');
        int ans = 0;
        string s1 = formula.substr(1, m - 1), s2 = formula.substr(m + 1, formula.size() - 1);
        if (s1[0] >= 'A')
        {
            ans += sheet[s1];
        }
        else
        {
            ans += stoi(s1);
        }
        if (s2[0] >= 'A')
        {
            ans += sheet[s2];
        }
        else
        {
            ans += stoi(s2);
        }
        return ans;
    }
};
