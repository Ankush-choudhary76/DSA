#include<bits/stdc++.h>
using namespace std ;
struct Node{
    int data ; 
    Node* next ;
    Node(int data1) :  data(data1) , next(nullptr){}
    Node(int data1 , Node* next1) :  data(data1) , next(next1){}
};
Node* DELETEmiddleNode(Node* head){
    if(head == NULL || head->next ==NULL)return NULL ; 
      Node* fast = head ;  Node* slow = NULL ;
    while(fast != NULL && fast->next != NULL){
        fast = fast->next->next;
        if(slow == NULL){
            slow = head ; 
        }else{
            slow = slow ->next ; 
        }
    }
    Node* middle = slow -> next ; 
    slow->next = slow ->next->next ; 
    free(middle );
    return head ; 
}
void printLL(Node* head ){
    while(head){
        cout<<head->data<<" ";
        head = head ->next ; 
    }
}
int main (){
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);
  // head->next->next->next->next->next = new Node(6);

    Node* nn = DELETEmiddleNode(head) ;
    printLL(nn);
}
