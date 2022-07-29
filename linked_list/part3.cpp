#include<bits/stdc++.h>
using namespace std;

//Node
struct Node
{
    int data;
    Node *next;
    Node(int x)
    {
        data=x;
        next=NULL;
    }
};
//Traversing a linked List recursivly

//Insert at begining

Node *insertBegin(Node *head, int x)
{
 
  Node *temp = new Node(x);
  temp->next=head;
  return temp;
   
   
}


void printList(Node *head){
        Node *curr=head;
        while(curr!=NULL){
        cout<<curr->data<<" ";
        curr=curr->next;
        }
}

int main()
{
    
   Node *head = new Node(10);
   head->next=new Node(20);
   head->next->next =new Node(30);
   head->next->next->next =new Node(40);
   int x;
   cout<<"Enter element to be inserted at begin"<<endl;
   cin>>x;
   cout<<endl;
   head=insertBegin(head,x);
   printList(head);
   return 0;
}