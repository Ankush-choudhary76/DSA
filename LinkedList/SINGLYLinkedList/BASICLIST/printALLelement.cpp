#include<bits/stdc++.h>
using namespace std ;

struct Node
{
    Node* next ;
    int data ;
    Node(int data1 , Node* next1){
        data =  data1 ;
        next  = next1 ;
    }
        Node(int data1){
        data =  data1 ;
        next  = nullptr ;
    }
};
Node* coverttolist(vector<int>&arr){
   Node* head = new Node(arr[0]);
     Node* move = head;
   for(  size_t i = 1 ; i < arr.size();i++){
    Node* temp = new Node(arr[i]);
    move->next = temp;
    move = temp ;
   }
   return head;
}
void printL(Node* head){
   Node*temp = head ;
   while(temp){
    cout<<temp->data<<" ";
    temp = temp->next;
   }
    
}
int main (){
    vector<int>arr={2,3,4,5};
    Node* head = coverttolist(arr);
  printL(head);

}
