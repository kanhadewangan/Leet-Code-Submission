
class Solution {
public:
  // Find MID element to the ListNode
   ListNode* findMid(ListNode* head){
    ListNode* slow = head;
    ListNode* fast = head->next;
    while(fast and fast->next){
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
   }

 // Compare and merge the list
 
   ListNode* merge(ListNode* l1 , ListNode* l2)
   {
    ListNode dummy(0);
    ListNode* tail = &dummy;
    while(l1 and l2){
        if(l1->val<=l2->val){
            tail->next = l1;
            l1 = l1->next;
        }
        else {
            tail->next = l2;
            l2 = l2->next;
        }
        tail = tail->next;
    }
    if(l1) tail->next = l1;
    if(l2) tail->next = l2;
     return dummy.next;
   }

    ListNode* sortList(ListNode* head) {
        if(head==nullptr or head->next==nullptr ){
            return head;
        }
        ListNode* mid = findMid(head);

        ListNode* right = mid->next;
        mid->next = nullptr;
        ListNode* left = sortList(head);
        right = sortList(right);
        return merge(left, right);

       
    }
};