#include<bits/stdc++.h>
using namespace std ;
struct  Node {
    int data ;
    Node* next ; 
   Node(int data1) : data(data1) , next(nullptr){}
};
Node* sort0s1s2s(Node* head){
    if(head == nullptr || head->next == nullptr) return head ; 
   Node* zeroHead = new Node(-1);  Node* zero = zeroHead ;
   Node* oneHead = new Node(-1);    Node* one = oneHead ;
   Node* twoHead = new Node(-1);     Node* two  = twoHead ;
   Node* temp = head ; 
   while(temp ){
     if(temp->data == 0){
       zero->next = temp;
       zero = zero->next;
    }else if (temp->data == 1){
        one->next = temp;
       one = one->next;
    }else{
        two->next = temp;
       two= temp;
    }
    temp = temp->next ; 
    }
    zero->next = (oneHead->next) ? oneHead->next : twoHead->next;
    one->next = twoHead->next ; 
    two->next  = nullptr; 

    Node* nn = zeroHead->next ;
    delete zeroHead ;
    delete twoHead;
    delete oneHead ;
    return nn ; 
}    
void printLL(Node* head){
    Node* temp = head ;
    while(temp){
    cout<<temp->data<<" ";
    temp = temp ->next ;
    }
}
int main (){
    Node* head = new Node(1);
    head->next = new Node(0);
    head->next->next = new Node(1);
    head->next->next->next = new Node(2);
    head->next->next->next->next = new Node(0);  
    head->next->next->next->next->next = new Node(2);  
    head->next->next->next->next->next->next = new Node(1); 
    Node* nn = sort0s1s2s(head);
    printLL(nn);
} 
 