#include<bits/stdc++.h>
using namespace std ;
struct Node
{
  int data ;
  Node* next ;
  Node(int data1) : data(data1) , next(nullptr) {}
  Node(int data1 , Node* next1) : data(data1) , next(next1) {}
};
Node* insert(Node* head ,int ele ,   int val){
  if(!head) return nullptr ; 
  if(head->data == ele ){
    return new Node(val , head);
  }
  Node* temp = head ;
  while(temp->next){
    if(temp->next->data == ele){
        Node* nn = new Node(val , temp->next);
        temp->next = nn ;
        break;
    }
    temp = temp ->next;
  }
    return head ; 
}
void print(Node*  head ){
    while(head){
        cout<<head->data<<" ";
        head = head->next ; 
    }
}
int main (){
    Node* head = new Node(2);
    head->next = new Node(4);
    head->next->next = new Node(6);
    head->next->next->next = new Node(8);
    head->next->next->next->next = new Node(10);
    int ele  = 4 ,  value = 11;
    Node* hd = insert(head  ,ele , value);
    print(hd );
}
