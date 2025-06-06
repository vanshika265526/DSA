class Solution {
  public:
    Node* deleteK(Node* head, int k) {
        // code here
        if(k==1){
            return NULL;     //delete every node i.e. NULL
        }
        Node* current=head;
        Node* prev=NULL;
        int count=1;
         while (current != NULL) {        //traversing
            if (count % k == 0) {         //checking if multiple of k
                // Delete the current node
                prev->next = current->next;
                delete current;
                current = prev->next;
            } else {
                prev = current;
                current = current->next;
            }
            count++;
        }
        return head;
    }
    
};
