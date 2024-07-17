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
        ListNode* head = new ListNode();
        ListNode* temp = head;
        int sum=0, carry=0;
        
        while (l1 || l2 || carry) {
            sum = 0;
            if(l1) {
                sum += l1->val;
                l1 = l1->next; // interesting..
            }
            if (l2) {
                sum += l2->val;
                l2 = l2-> next;
            }
            temp->next = new ListNode((sum+carry)%10);
            temp = temp->next;
            carry = (sum+carry)/10; // this keeps the nodes value at range(0-9)
        }
    }
    return head->next;
};
