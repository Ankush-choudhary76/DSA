#include<bits/stdc++.h>
using namespace std ;  
struct  Node
{
   int data ;
   Node* next ; 
   Node(int data1 ) : data(data1) , next(nullptr ) {}
   Node(int data1 , Node* next1) : data(data1) , next(next1) {}
};
Node* removeTheNthNodeFromEnd(Node* head , int N){
    if(head == nullptr){
        return head ; 
    }
    Node* fastp = head ;
    Node* slowp = head ;
    for(int i=0 ; i<N;i++){
        fastp = fastp->next ; 
    }
    if(fastp == nullptr) return head->next ; 

    while(fastp->next != nullptr){
             fastp = fastp->next;
             slowp = slowp->next;
    }
    Node* delnode = slowp->next;
    slowp->next = slowp->next->next;
    free(delnode);

    return head  ;
}
void printLL(Node* head){
    Node* temp = head;
    while(temp){
    cout<<temp->data<<" ";
    temp = temp->next ;
    }
}
int main (){
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next ->next->next= new Node(4);
    head->next->next->next->next = new Node(5);
    int N = 2 ; 
    Node* nn = removeTheNthNodeFromEnd(head ,N );
    printLL(nn) ; 
}
