#include <bits/stdc++.h>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution
{
public:
    ListNode *removeNthFromEnd(ListNode *head, int n)
    {

        if (head == nullptr)
            return head;
        if (head->next == nullptr)
            return head;

        ListNode *first = head;
        ListNode *second = head;
        
        int count = 0;

        while (first != nullptr)
        {
            first = first->next;
            count++;
        }

        int oneNodeBeforeN = count - n - 1;

        for (int i = 0; i < oneNodeBeforeN; i++)
        {
            second = second->next;
        }

        ListNode *temp = second->next;

        temp->next = nullptr;
        second->next = temp->next;
        delete temp;
        return head;
    }
};
