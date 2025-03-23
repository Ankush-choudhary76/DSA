#include<bits/stdc++.h>
using namespace std ;
struct Node
{
  int data ;
  Node* next ;
  Node(int data1) : data(data1) , next(nullptr) {}
};
Node* deleteK(Node* head , int val){
   if(head->data == val){
    Node* temp = head ;
    head = head->next;
    free(temp);
    return head ;
   }
   Node* temp = head ;
    Node* prev = nullptr;
   while(temp){
    if(temp->data == val){
        prev->next = prev->next->next;
        delete temp ;
        break;
    }
    prev = temp ;
    temp = temp->next ; 
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
    int value = 6;
    Node* hd = deleteK(head  , value);
    print(hd);
}

