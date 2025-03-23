#include<bits/stdc++.h>
using namespace std ;  
struct  Node
{
   int data ;
   Node* next ; 
   Node(int data1 ) : data(data1) , next(nullptr ) {}
   Node(int data1 , Node* next1) : data(data1) , next(next1) {}
};
Node*  reverseLinkedList(Node* head ){
    if(head == nullptr || head ->next == nullptr){
        return head ; 
    }
    Node* temp= head ; 
    stack<int>st ;
    while(temp){
        st.push(temp->data);
        temp = temp->next ; 
    }
    temp = head ; 
    while(temp){
        temp->data = st.top();
        st.pop();
        temp = temp ->next ; 
    }
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
    head->next ->next->next= new Node(5);
    Node* nn = reverseLinkedList(head  );
    printLL(nn) ; 
}
