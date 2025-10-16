#include <bits/stdc++.h>
using namespace std;



// merge sort approach to solve thsi question
vector<int> FindUnion(int n, int m, vector<int> &arr1, vector<int> &arr2)
{
    // Write your code here
    vector<int> unionArray;
    int left = 0;
    int right = 0;

    while (left < n && right < m)
    {
        if (left > 0 && arr1[left] == arr1[left - 1])
        {
            left++;
            continue;
        }

        if (right > 0 && arr2[right] == arr2[right - 1])
        {
            right++;
            continue;
        }

        if (arr1[left] < arr2[right])
        {
            unionArray.push_back(arr1[left]);
            left++;
        }
        else if (arr1[left] > arr2[right])
        {
            unionArray.push_back(arr2[right]);
            right++;
        }
        else if (arr1[left] == arr2[right])
        {
            unionArray.push_back(arr2[right]);
            left++;
            right++;
        }
    }
    while (left < n)
    {
        if (left == 0 || arr1[left] != arr1[left - 1])
        {
            unionArray.push_back(arr1[left]);
            left++;
        }
    }
    while (right < m)
    {
        if (right == 0 || arr2[right] != arr2[right - 1])
        {
            unionArray.push_back(arr2[right]);
            right++;
        }
    }
    return unionArray;
}
// another approch to solve this questions 

vector<int> findUnion(int n, int m, vector<int>& arr1, vector<int>& arr2) {
    set<int> unionSet;
    
    for (int num : arr1) {
        unionSet.insert(num);
    }
    
    for (int num : arr2) {
        unionSet.insert(num);
    }
    
    return vector<int>(unionSet.begin(), unionSet.end());
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<int> arr1(n), arr2(m);

        for (int i = 0; i < n; i++)
        {
            cin >> arr1[i];
        }

        for (int i = 0; i < m; i++)
        {
            cin >> arr2[i];
        }

        vector<int> result = findUnion(n, m, arr1, arr2);

        for (auto &val : result)
        {
            cout << val << " ";
        }
        cout << endl;
    }

    return 0;
}