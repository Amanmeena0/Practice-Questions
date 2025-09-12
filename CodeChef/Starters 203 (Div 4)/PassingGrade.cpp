#include <bits/stdc++.h>
using namespace std;

int main()
{
   int t;
   cin >> t;
   while (t--)
   {
      int n;
      cin >> n;
      vector<int> ans(n);
      for (int i = 0; i < n; i++)
      {
         cin >> ans[i];
      }
      int count = 0;
      int cutOff = ans[0];
      for (int i = 1; i < ans.size(); i++)
      {
         if (ans[i] >= cutOff)
         {
            count++;
         }
      }
      cout <<" Number of student who will pass the exam : "<< count << "\n";
   }
   return 0;
}