#include <iostream>

using namespace std;


struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};



class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int size = 0;
        ListNode *curr = head;
        while (curr)
        {
            size++;
            curr = curr->next;
        }
        int index = size - n + 1;
        curr = head;
        ListNode *pt1, *pt2;
        for (int i = 0; i != index-2; i++)
        {
            curr = curr->next;
        }
        curr->next = curr->next->next;
        
        return head;
    }
};