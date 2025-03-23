#include<bits/stdc++.h>
using namespace std ;
struct Node
{
    int data  ;
    Node* next ;
    Node(int data1 ) : data(data1) , next(nullptr){}
};
Node* removeTAIL(Node* head){
       if(head == nullptr ) return head;
       Node* temp = head ;
    while(head){
        if(head->next->next == nullptr){
           head->next = nullptr ; 
        }
        head = head->next ;
    }
    return temp  ; 
}
int main(){
    Node* head = new Node(1);
    head->next = new Node(3);
    head->next->next = new Node(5);
    head->next->next->next = new Node(7);
   
   Node* NH = removeTAIL(head);
   while(NH){
    cout<<NH->data<<" ";
    NH = NH->next ; 
   }
}
