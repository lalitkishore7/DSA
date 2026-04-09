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
    ListNode* removeNthFromEnd(ListNode* head, int n) {

                if(head->next == NULL) return NULL;

        int i = 0, j = 0;
        ListNode* temp = head;
        while(temp != NULL){
            i++;
            temp = temp->next;
        }

        if(n == i){
            return head->next;
        }
        j = i - n;
        temp = head;

        while(j - 1 > 0){
            j--;
            temp = temp->next;
        }

        ListNode* delNode = temp->next;
        temp->next = temp->next->next;
        delete(delNode);

        return head;
        
    }
};
