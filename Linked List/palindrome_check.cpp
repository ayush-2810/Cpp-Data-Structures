int length(node *head,int len){
    node *temp=head;
    while(temp!=nullptr){
        temp=temp->next;
        len++;
    }
    return len;
}
bool ans(node *temp,int len,int i,int x,int &y){
    if(len==x)
        return true;
    node *lol=temp;
    while(lol->next!=nullptr){
        if (i==len-y-1)
            break;
        lol=lol->next;
        ++i;
    }
    if (temp->data==lol->data){
        i=0;
        y++;
        return ans(temp->next,len-1,i,x,y);
    }
    else
        return false;
}
bool check_palindrome(node* head)
{
    int lol=0,i=0,x,y=0;
    node *temp=head;
    int len=length(head,lol);
    x=len/2;
    return ans(temp,len,i,x,y);
}
