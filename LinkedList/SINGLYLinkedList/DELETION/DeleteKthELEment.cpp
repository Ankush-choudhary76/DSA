#include<bits/stdc++.h>
using namespace std ;
struct Node
{
  int data ;
  Node* next ;
  Node(int data1) : data(data1) , next(nullptr) {}
};
Node* deleteK(Node* head , int k){
    if(head == nullptr) return head ; 
    if(k == 1 ){
        Node* temp = head ;
        head = head->next;
        delete temp ;
        return head ; 
    }
    int cnt =0 ; 
    Node* temp = head ;
    Node* prev = nullptr;
    while(temp!=nullptr){
        cnt ++;
        if(cnt == k ){
          prev->next = prev ->next->next;
          free(temp );
        break; ; 
        }
        prev = temp ;
        temp = temp ->next ; 
    }
    return head ; 

}
void print(Node*  head ){
    while(head){
        cout<<head->data<<" ";
        head = head->next ; 
    }
}
int main (){
    Node* head = new Node(2);
    head->next = new Node(4);
    head->next->next = new Node(6);
    head->next->next->next = new Node(8);
    head->next->next->next->next = new Node(10);
    int k = 1;
    Node* hd = deleteK(head  , k );
    print(hd );
}

