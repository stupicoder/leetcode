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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
        ListNode* result = nullptr;
        ListNode* head = nullptr;

        int sum = 0;
        while(l1 != nullptr || l2 != nullptr)
        {
            ListNode* NewNode = new ListNode();
            const int r1 = (l1 == nullptr) ? 0 : l1->val;
            const int r2 = (l2 == nullptr) ? 0 : l2->val;
            if (l1 != nullptr) { l1 = l1->next; }
            if (l2 != nullptr) { l2 = l2->next; }
            sum = sum + r1 + r2;
            NewNode->val = (sum > 9) ? sum - 10 : sum;
            sum /= 10;
            if (result == nullptr)
            {
                result = NewNode;
                head = NewNode;
            }
            else
            {
                result->next = NewNode;
                result = NewNode;
            }
        }
        if (sum != 0)
        {
            result->next = new ListNode(1);
        }

        return head;
    }
};