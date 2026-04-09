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

            ListNode* node1 = l1;
            ListNode* node2 = l2;

            int carry = 0;
            ListNode* head = new ListNode();
            ListNode* curr = head;

            while(node1 != NULL || node2 != NULL || carry){
                int sum = 0;

                if(node1){
                    sum += node1->val;
                    node1 = node1->next;
                }
                if(node2){
                    sum += node2->val;
                    node2 = node2->next;
                }

                sum += carry;

                ListNode* newNode = new ListNode(sum%10);

                carry = sum/10;
                curr->next = newNode;
                curr = curr->next;
            }

            return head->next;
        
    }
};
