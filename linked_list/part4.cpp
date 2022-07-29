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

//Insert at last

Node *insertLast(Node *head, int x)
{
 
  Node *temp = new Node(x);
  Node *curr = head;
  if(head==NULL)
   return temp;

  while(curr->next!=NULL)
   {
        curr=curr->next;
   }
  curr->next=temp;
  return head;
   
   
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
   cout<<"Enter element to be inserted at last"<<endl;
   cin>>x;
   cout<<endl;
   head=insertLast(head,x);
   printList(head);
   return 0;
}