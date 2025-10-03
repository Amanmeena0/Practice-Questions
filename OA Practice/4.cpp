#include <bits/stdc++.h>
using namespace std;

int findCount(int arr[], int length, int num, int diff)
{
    int count = 0;
    for (int i = 0; i < length; i++)
    {
        int value = abs(arr[i] - num);
        if (value >= diff)
            count++;
    }
    return count > 0 ? count : -1;
}

int main()
{
    int nums;
    cin >> nums;
    int diff;
    cin >> diff;
    int length;
    cin >> length;
    int arr[length];
    for (int i = 0; i < length; i++)
    {
        cin >> arr[i];
    }

    cout << findCount(arr, length, nums, diff) << endl;
    return 0;
}