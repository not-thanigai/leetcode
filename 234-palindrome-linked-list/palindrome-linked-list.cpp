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
        stack<int> s;
        string p = "";
        ListNode * ptr = head;
        while(ptr){
            p+=""+to_string(ptr->val);
            ptr=ptr->next;
        }
        for(int i=0;i<p.length()/2;i++){
                    std:cout << p[i] << p[p.length()-1-i]<< endl;

            if( p[i] != p[p.length()-1-i]) return 0; 
        }
        return 1;
    }
};