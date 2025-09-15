#include <bits/stdc++.h>
using namespace std;

void subSq(vector<int>& A, int K, int idx, vector<int>& ans, vector<vector<int>>& results) {
    if (ans.size() == K) {
        results.push_back(ans);
        return;
    }
    for (int i = idx; i < A.size(); i++) {
        ans.push_back(A[i]);
        subSq(A, K, i + 1, ans, results);
        ans.pop_back();
    }
}

void generateB(vector<int>& A, int K, vector<int>& B) {
    vector<vector<int>> results;
    vector<int> ans;
    subSq(A, K, 0, ans, results);

    for (auto& subseq : results) {
        int xr = 0;
        for (int num : subseq) {
            xr ^= num;
        }
        B.push_back(xr);
    }
}

int compute_f(vector<int>& B) {
    unordered_set<int> xor_set;
    xor_set.insert(0); // include empty subsequence

    for (int num : B) {
        unordered_set<int> new_xors = xor_set;
        for (int x : xor_set) {
            new_xors.insert(x ^ num);
        }
        xor_set = new_xors;
    }
    return xor_set.size();
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, K;
        cin >> N >> K;

        vector<int> A(N);
        for (int i = 0; i < N; i++) {
            cin >> A[i];
        }

        vector<int> B;
        generateB(A, K, B);
        int result = compute_f(B);
        cout << result << endl;
    }
    return 0;
}
