#include <bits/stdc++.h>
using namespace std;

int largeSmallSum(vector<int> &arr)
{
    if (arr.size() <= 3)
        return 0;
    vector<int> evenPos;
    vector<int> oddPos;
    for (int i = 0; i < arr.size(); i++)
    {
        if (i % 2 == 0)
        {
            evenPos.push_back(arr[i]);
        }
        else
        {
            oddPos.push_back(arr[i]);
        }
    }

    sort(evenPos.rbegin(), evenPos.rend());
    sort(oddPos.begin(), oddPos.end());

    return evenPos[1] + oddPos[1];
}

int main()
{
    vector<int> arr = {1, 8, 0, 2, 3, 5, 6};
    cout << largeSmallSum(arr);
    return 0;
}