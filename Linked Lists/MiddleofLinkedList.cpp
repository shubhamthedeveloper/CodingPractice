//https://practice.geeksforgeeks.org/problems/finding-middle-element-in-a-linked-list/1

int getMiddle(Node *head)
{
    Node* t1 = head;
    Node* t2 = head;
    
    if(head!=NULL){
        while(t2 != NULL && t2->next != NULL){
            t1 = t1->next;
            t2 = t2->next->next;
        }
    }
    return t1->data;
}