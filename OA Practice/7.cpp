#include <bits/stdc++.h>
using namespace std;

int productSmallestPair(int *array, int n, int sum)
{
    if (n < 2)
        return -1;
    for(int i = 0; i < n; i++){
        for(int j = i+1; j < n; j++){
            if(array[i] > array[j]){
                int temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
    int answer = array[0] + array[1];
    int final = 0;
    if(answer <= sum){
        final = array[0] * array[1];
    }else {
        final = 0;
    }
    return final;
}

int main()
{
    int sum;
    cin>>sum;
    int n;
    cin>>n;
    int *array = new int[n];
    for(int i = 0; i < n ; i++){
        cin>>array[i];
    }
    cout<<productSmallestPair(array,n,sum);
    return 0;
}