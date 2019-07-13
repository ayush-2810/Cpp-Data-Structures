#include <bits/stdc++.h>
using namespace std;
#define ll long long int
class Node{
    public :   //Set the required data members in the public part of the class.
        int data;
        Node *next;
        Node(int data){     //Making the constructor for the class.
            this -> data = data;
            this -> next = nullptr;
        }
};
Node* insertdata(){     //Function for inserting data into the linked list.
    Node *head = nullptr;      //Setting head and tail to NULL.
    Node *tail = nullptr;
    while(1){  //Taking input till data is not equal to -1.
        int data;
        cin>>data;
        if(data == -1)
            break;
        Node *newnode = new Node(data);
        if (head==nullptr){
            head = newnode;
            tail = newnode;
            }
        else{
            tail -> next = newnode;
            tail = newnode;
            }
        }
        return head;
    }

void print(Node *head){    //Function for printing the linked list.
    Node *temp = head;
    while(temp != nullptr){
        cout<<temp -> data<<" ";
        temp = temp -> next;
    }
}
int main(){
	Node *head = insertdata();
    print(head);
    return 0;
}
