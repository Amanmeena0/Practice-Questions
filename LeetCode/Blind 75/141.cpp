#include <bits/stdc++.h>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};
//hash map
class Solution {
public:
    bool hasCycle(ListNode *head) {
        unordered_set<ListNode*> visited; 
        ListNode* curr = head;
        while (curr != nullptr) {
            if (visited.find(curr) != visited.end()) {
                return true;
            }
            visited.insert(curr);
            curr = curr->next;
        }
        return false;
    }
};
// two pointer
class Solution{
public:
    bool hasCycle(ListNode* head){
        ListNode* slow = head;
        ListNode* fast = head;

        while(fast != NULL && fast->next != NULL) {
            slow = slow->next;
            fast = fast->next->next;

            if(slow == fast){
                return true;
            }
        }
        return false;
    }
};