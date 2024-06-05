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
        bool bValidl1 = l1 != nullptr, bValidl2 = l2 != nullptr;
        while(bValidl1 || bValidl2)
        {
            ListNode* NewNode = new ListNode();
            const int r1 = (bValidl1) ? l1->val : 0;
            const int r2 = (bValidl2) ? l2->val : 0;
            if (bValidl1) { l1 = l1->next; }
            if (bValidl2) { l2 = l2->next; }
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
            bValidl1 = l1 != nullptr; 
            bValidl2 = l2 != nullptr;
        }
        if (sum != 0)
        {
            result->next = new ListNode(1);
        }

        return head;
    }
};