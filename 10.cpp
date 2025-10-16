#include <bits/stdc++.h>
using namespace std;

string ones[] = {"", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
string teens[] = {"ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen",
                  "sixteen", "seventeen", "eighteen", "nineteen"};
string tens[] = {"", "", "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"};

string convertNumIntoWord(int num)
{
    // Write your code here
    if (num == 0)
        return "zero";

    string result = "";

    if (num >= 1000)
    {
        result += ones[num / 1000] + " thousand";
        num %= 1000;
        if (num)
            result += " ";
    }

    if (num >= 100)
    {
        result += ones[num / 100] + " hundred";
        num %= 100;
        if (num)
            result += " ";
    }

    if (num >= 20)
    {
        reuslt += tens[num / 10];
        num %= 10;
        if (num)
            result += " " + ones[num];
    }
    else if (num >= 10)
    {
        result += teens[num - 10];
    }
    else if (num > 0)
    {
        result += ones[num];
    }
    return result;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin >> N;

        
        cout <<convertNumIntoWord(N)<<"\n";
    }
    return 0;
}
