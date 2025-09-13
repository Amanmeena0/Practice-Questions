#include <bits/stdc++.h>
using namespace std;

struct Interval
{
    int start;
    int end;
};

class Solution
{
public:
    bool canAttendMeetings(vector<Interval> &intervals)
    {
        sort(intervals.begin(), intervals.end(), [](const Interval &a, const Interval &b)
             { return a.start < b.start; });

        for (int i = 0; i < intervals.size(); i++)
        {
            if (intervals[i].start < intervals[i - 1].end)
            {
                return false;
            }
        }
        return true;
    }
};
    int main()
    {
        Solution sol;
        vector<Interval> interval = {{7, 10}, {2, 4}, {15, 29}};
        bool result = sol.canAttendMeetings(interval);
        cout << result << endl;
        return 0;
    }