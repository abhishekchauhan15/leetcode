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
    bool isPalindrome(ListNode* head) {
        ListNode* end=head;
        ListNode* start=head;
        
        stack<int>st;
        
        
        while(end!=NULL){
            st.push(end->val);
            end=end->next;  
            
        }
        
         while(!st.empty() || start!=NULL){
             if(st.top()!=start->val)
                 return false;
             
             st.pop();
             start=start->next;             
         }
        
        return true;
        
        
        
    }
};