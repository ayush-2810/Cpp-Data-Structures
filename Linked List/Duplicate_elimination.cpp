node* eliminate_duplicate(node* head)
{
    node *temp=head;
    while(temp->next!=nullptr){
        if(temp->data==temp->next->data){
            if(temp->next->next==nullptr)
                temp->next=nullptr;
            else
                temp->next=temp->next->next;
        }
        else
            temp=temp->next;
    }
    return head;
}
