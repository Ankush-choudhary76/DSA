#include<bits/stdc++.h>
using namespace std ;  
struct  Node
{
   int data ;
   Node* next ; 
   Node(int data1 ) : data(data1) , next(nullptr ) {}
   Node(int data1 , Node* next1) : data(data1) , next(next1) {}
};
 Node* middleELEMENT( Node* head ){
      Node* slow = head  ; Node* fast = head ; 
    while(fast!= nullptr && fast->next != nullptr){
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow ; 
 }

int main (){
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next ->next->next= new Node(4);
    head->next->next->next->next = new Node(5);

    Node* nn = middleELEMENT(head  );
    cout<<nn->data;
}
