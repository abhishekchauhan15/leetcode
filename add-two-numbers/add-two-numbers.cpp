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
        ListNode *head=new ListNode(0);
        ListNode *curr=head;
        int summ=0;
        int toAdd=0;
        
        while(l1 || l2 || toAdd){
            summ=0;
            summ= (l1 ? l1->val :0 ) + (l2 ? l2->val :0)+ toAdd;
            
            if(summ>=10){
                summ=summ%10;
                toAdd=1;
            }else 
                toAdd=0;
            
            curr->next= new ListNode(summ);
            curr=curr->next;
            
            
            if(l1) l1=l1->next;
            if(l2) l2=l2->next;
            
        }
        return head->next;
        
        
        //time=O(max(n,m))
        //space=O(max(n,m))
        
        
    }
};