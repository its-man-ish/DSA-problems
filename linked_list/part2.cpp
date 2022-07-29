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

void printList(Node *head)
{
  if(head==NULL)
    return;

  cout<<head->data<<" ";
  printList(head->next); 

   
   
}

int main()
{
    
   Node *head = new Node(10);
   head->next=new Node(20);
   head->next->next =new Node(30);
   head->next->next->next =new Node(40);

   printList(head);
   return 0;
}