#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int minimumTeachings(int n, vector<vector<int>> &languages, vector<vector<int>> &friendships)
    {
        unordered_set<int> sadUsers;

        for (auto &friends : friendships)
        {
            int u = friends[0] - 1;
            int v = friends[1] - 1;

            unordered_set<int> langSet(begin(languages[u]), end(languages[u]));

            bool canTalk = false;

            for (int lang : languages[v])
            {
                if (langSet.count(lang))
                {
                    canTalk = true;
                    break;
                }
            }
            if (!canTalk)
            {
                sadUsers.insert(u);
                sadUsers.insert(v);
            }
        }

        vector<int> language(n + 1, 0);
        int mostKnownLanguage = 0;
        for (int user : sadUsers)
        {
            for (int lang : languages[user])
            {
                language[lang]++;
                mostKnownLanguage = max(mostKnownLanguage, language[lang]);
            }
        }
        int sizeOfSet = sadUsers.size()+1;
        return sizeOfSet - mostKnownLanguage;
    }
};

int main()
{
    Solution obj;
    int n = 3;
    vector<vector<int>> l = {{1}, {2}, {1, 2}};
    vector<vector<int>> v = {{1, 2}, {1, 3}, {2, 3}};

    int result = obj.minimumTeachings(n, l, v);

    cout << result;

    return 0;
}