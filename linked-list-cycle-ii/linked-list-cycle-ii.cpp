/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        map<ListNode*, int >mp;
        ListNode *temp=head;
        
        if(temp==NULL)
            return NULL;
        
        while(temp!=NULL){
            if(mp[temp]==1)
                return temp;
            
            else{
                mp[temp]=1;
                temp=temp->next;
            }
        }
        return NULL;
        
    }
};