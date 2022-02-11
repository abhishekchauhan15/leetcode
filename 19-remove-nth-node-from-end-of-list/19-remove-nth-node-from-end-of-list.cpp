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
        ListNode *temp=head;
        int count=0;
        
               
        while(temp!=NULL){
            count++;
            temp=temp->next;
            
        }
        
        
        if(n==count){
            head=head->next;
            return head;
        }
        
        int steps=count-n-1;
        ListNode * dummy=head;
        
     
            while(steps--){
                if(dummy->next)
                    dummy=dummy->next;
            }
        
        
        // if(dummy->next->next)
            dummy->next=dummy->next->next;
        
        return head;
        
        
        
        
        
    }
};