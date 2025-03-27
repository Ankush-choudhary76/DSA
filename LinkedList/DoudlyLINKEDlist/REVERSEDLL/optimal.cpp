#include<bits/stdc++.h>
using  namespace std ;
struct Node{
    int data ; 
    Node* next ; 
    Node* back ;
    Node(int data1 ) : data(data1)  , next(nullptr) , back(nullptr) {}
    Node(int data1  , Node* next1 , Node* back1) : data(data1)  , next(next1) , back(back1) {}
};
Node* reverseADLL(Node* head){
    if(head == nullptr || head->next == nullptr){
        return head ; 
    }
 Node* last = nullptr ;
 Node* curr = head ;
 while(curr != nullptr){
   last = curr->back ; 
   curr->back = curr->next;
   curr->next = last;

   curr = curr->back ; 
 } 
   return   last->back ; 
 
}
void printDLL(Node* head){
    while(head){
        cout<<head->data<<" ";
        head = head->next ; 
    }
}

int main (){
   Node* head = new Node(2);
   head->next = new Node(4 ,nullptr , head);
      head->next->next = new Node(6 ,nullptr , head->next);
         head->next->next->next = new Node(8 ,nullptr , head->next->next);
            head->next->next->next->next = new Node(10 ,nullptr , head->next->next->next);

    Node* hd =  reverseADLL(head);

   printDLL(hd);
}
