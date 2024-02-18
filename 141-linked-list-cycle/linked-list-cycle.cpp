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
    bool hasCycle(ListNode *head) {
        int t = 1;
        ListNode *a = head;
        if(a==NULL) return 0;
        ListNode *b = head->next;
        if(b==NULL) return 0;
        while(a!=b){
            t++;
            for(int i=0;i<t;i++){
                b=b->next;
                if(b==NULL) return 0;
            }
            for(int i=0;i<t-1;i++){
                a=a->next;
                if(a==NULL) return 0;
            }
        }
        return 1;
    }
};