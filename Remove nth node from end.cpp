
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
       int count=0;
        ListNode* current=head;
        //Count total number of nodes by traversing
        while(current!=NULL){
            count++;
            current=current->next;
        }
        count=count-n;
        if(count==0){    //removing first node
            ListNode* temp1=head;
            head=head->next;
            delete temp1;
            return head;

        }
        ListNode* prev=NULL;
        ListNode* current1=head;
        while(count--){
            prev=current1;
            current1=current1->next;
        }
        prev->next=current1->next;
        delete current1;
        return head;
    }
};
