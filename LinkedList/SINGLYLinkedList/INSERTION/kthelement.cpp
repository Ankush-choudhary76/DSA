#include<bits/stdc++.h>
using namespace std ;
struct Node
{
  int data ;
  Node* next ;
  Node(int data1) : data(data1) , next(nullptr) {}
};
Node* insert(Node* head ,int k ,  int val){
  if(!head) return head ; 
  if(k == 1 ){
    Node* temp = new Node(val);
      temp->next = head ; 
      free(head);
      return temp ;
    }
    int cnt =0 ;
    Node* temp = head ; 
    Node* prev = nullptr;
    while(temp){
        cnt++;
        if(cnt == k ){
        Node* nn = new Node(val);
        prev->next = nn;
        nn->next = temp ; 
        }
        prev = temp ;
        temp = temp->next ;
    }
    free(temp);
    free(prev);
    return head;
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
    int k  =  4 , value = 11;
    Node* hd = insert(head  ,k , value);
    print(hd );
}
