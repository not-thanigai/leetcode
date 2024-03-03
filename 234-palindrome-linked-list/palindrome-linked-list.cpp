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
        /*string p = "";
        ListNode * ptr = head;
        while(ptr){
            p+=""+to_string(ptr->val);
            ptr=ptr->next;
        }
        for(int i=0;i<p.length()/2;i++){
            if( p[i] != p[p.length()-1-i]) return 0; 
        }
        return 1;*/
        
        ListNode *slow = head;
        ListNode *fast = head;
        ListNode *prev = NULL;
        ListNode* temp = NULL;
        while(fast && fast->next){
            fast = fast->next->next;
            temp = slow->next;
            slow->next = prev;
            prev = slow;
            slow = temp;
        }
        if(fast) {
            slow=slow->next;
        }
        while(slow && prev){
            if(slow->val != prev->val) return 0;
            slow = slow->next;
            prev = prev->next;
        }

        return 1;
    }
    
};