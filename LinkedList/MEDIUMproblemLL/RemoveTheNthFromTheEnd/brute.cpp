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
    Node* temp = head ; 
    int cnt =0 ;
    while(temp){
        cnt++;
        temp = temp->next ; 
    }
    if(cnt == N){
        Node* nn = head->next ;
        delete head ;
        return nn ; 

    }
    int result = cnt - N ;
    temp = head ;
    while(temp){
        result--;
        if(result==0){
          break ; 
        }
        temp = temp->next ;
    }
    Node* delnode = temp->next;
    temp->next = temp->next->next;
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
