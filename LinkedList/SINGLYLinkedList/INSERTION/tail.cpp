#include<bits/stdc++.h>
using namespace std ;
struct Node
{
  int data ;
  Node* next ;
  Node(int data1) : data(data1) , next(nullptr) {}
};
Node* insert(Node* head , int val){
    Node* temp = head ;
       while(temp->next){
         temp = temp->next;
        }
         Node* newnode = new Node(val);
         temp->next = newnode;
         free(temp);
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
    int value = 11;
    Node* hd = insert(head  , value);
    print(hd );
}
