#include<bits/stdc++.h>
using namespace std ;  
struct  Node
{
   int data ;
   Node* next ; 
   Node(int data1 ) : data(data1) , next(nullptr ) {}
   Node(int data1 , Node* next1) : data(data1) , next(next1) {}
};
Node*  reverseLL(Node* head ){
    if(head == nullptr || head ->next == nullptr){
        return head ; 
    }
   Node* nn = reverseLL(head->next);
    Node* front = head->next;
    front->next = head ;
    head->next = nullptr;
    return nn ;
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
    head->next ->next->next= new Node(5);
    Node* nn = reverseLL(head  );
    printLL(nn) ; 
}

