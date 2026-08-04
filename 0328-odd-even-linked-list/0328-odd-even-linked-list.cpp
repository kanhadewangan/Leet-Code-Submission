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
    ListNode* oddEvenList(ListNode* head) {
        if(!head ) return nullptr;
        ListNode* oddNodes = head;
        ListNode* evenNodes  = head->next;
        ListNode * evenHead =  evenNodes;
        while(evenNodes !=nullptr and evenNodes->next !=nullptr ){
            // add odd nodes starting
            oddNodes->next = evenNodes->next;
            oddNodes= oddNodes->next;

            // linking them
             evenNodes->next = oddNodes->next;
             evenNodes = evenNodes->next;

        }
        oddNodes->next =  evenHead;
        return head;
        
        
    }
};