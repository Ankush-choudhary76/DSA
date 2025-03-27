#include<bits/stdc++.h>
using  namespace std ;
struct Node{
    int data ; 
    Node* next ; 
    Node* back ;
    Node(int data1 ) : data(data1)  , next(nullptr) , back(nullptr) {}
    Node(int data1  , Node* next1 , Node* back1) : data(data1)  , next(next1) , back(back1) {}
};

void printDLL(Node* head){
    while(head){
        cout<<head->data<<" ";
        head = head->next ; 
    }
}
Node* beforetail( Node* head , int val ){
    Node* tail = head ;
    while(tail->next){
      tail =tail->next;
    }
    Node* nh = new Node(val , tail , tail->back);
    nh->back->next = nh;
    tail->back  = nh ; 
    return head ; 
}
int main (){
   Node* head = new Node(2);
   head->next = new Node(4 ,nullptr , head);
      head->next->next = new Node(6 ,nullptr , head->next);
         head->next->next->next = new Node(8 ,nullptr , head->next->next);
            head->next->next->next->next = new Node(10 ,nullptr , head->next->next->next);
    int val = 11 ; 
  
   Node* hn = beforetail(head , val );
   printDLL(hn);
}
