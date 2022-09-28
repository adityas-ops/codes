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
         int i=0;
        ListNode*temp=head;
        while(temp!=NULL){
            temp=temp->next;
            i++;
        }
        if(i==1)
            return NULL;
        i=i-n-1;
        if(i==-1){
            head=head->next;
            return head;
        }
        temp=head;
        while(i>0){
            temp=temp->next;
            i--;
        }
        temp->next=temp->next->next;
        return head;
    }
};