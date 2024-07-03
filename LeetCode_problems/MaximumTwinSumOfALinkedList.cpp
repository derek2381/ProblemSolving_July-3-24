// problem link
// https://leetcode.com/problems/maximum-twin-sum-of-a-linked-list/description/


/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    int pairSum(ListNode* head) {
        ListNode *a = head;
        ListNode *b = head->next;
        long long int res = 0;

        while(b->next != nullptr){
            a = a->next;
            b = b->next->next;
        }

        stack<ListNode *> stk;

        while(a != nullptr){
            stk.push(a);
            a = a->next;
        }
        b = head;

        while(stk.size() > 0){
            long long int val = stk.top()->val;
            val += b->val;
            res = max(res, val);
            b = b->next;
            stk.pop();
        }

        return res;
    }
};
