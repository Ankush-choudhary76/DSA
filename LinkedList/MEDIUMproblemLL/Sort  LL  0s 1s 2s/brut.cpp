#include<bits/stdc++.h>
using namespace std ;
struct  Node {
    int data ;
    Node* next ; 
   Node(int data1) : data(data1) , next(nullptr){}
};
Node* sort0s1s2s(Node* head){
   Node* temp = head ;
   int cnt0 = 0 , cnt1=0 , cnt2=0 ; 
   while(temp){
    if(temp->data == 0 ){
        cnt0++;
    }else if(temp->data == 1 ){
        cnt1++;
    }else
     cnt2++ ; 
    temp = temp->next ; 
    }
    temp = head ; 
    while(temp){
    if(cnt0){
        temp->data = 0 ;
        cnt0 --;
    }else if(cnt1 ){
        temp->data = 1 ;
        cnt1 --;
    }else{
        temp->data = 2 ;
        cnt2 --;
    }
 
    temp = temp->next ; 
    }
    return head ; 
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
 