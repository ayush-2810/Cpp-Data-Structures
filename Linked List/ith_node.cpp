void printIthNode(Node *head, int i) {
    int x=0;
    Node *temp=head;    //Making temp as a temporary variable for the head.
    int flag=1;
    while(x!=i){
        temp=temp -> next;  //Traversing through the linked list.
        ++x;
        if (temp->next==NULL){
            flag=0;
            break;}
    }
    if (flag==1)
        cout<<temp->data;

}
