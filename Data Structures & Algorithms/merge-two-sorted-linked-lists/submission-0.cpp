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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode res(0);
        ListNode* resfinal =&res;
        while(list1 && list2){
        if (list1->val<=list2->val){
            resfinal->next = list1;
            resfinal= resfinal->next;
            list1=list1->next;
        }
        else{
            resfinal->next = list2;
            resfinal= resfinal->next;
            list2=list2->next;
        }
        }
        if (list1){
            resfinal->next = list1;
        }
        else {
             resfinal->next = list2;
        }
        return res.next;
    }
};
