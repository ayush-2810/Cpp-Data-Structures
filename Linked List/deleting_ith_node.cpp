Node* deleteNode(Node *head, int i) {   //Function for deleting ith node.
    int x=0;
    Node *prev=nullptr;
    Node *temp=head;
    if(i==0){
        head=head->next;
        return head;
    }
    while(temp!=nullptr && x!=i){
        prev=temp;
        temp=temp->next;
        x++;
    }
    if(temp!=nullptr){
        prev->next=temp->next;
        temp=nullptr;
        return head;
    }
    return head;
}
