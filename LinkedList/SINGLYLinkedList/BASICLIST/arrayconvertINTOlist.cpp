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
Node* coverttolist(vector<long>&arr){
   Node* head = new Node(arr[0]);
     Node* move = head;
   for(long i = 1 ; i<arr.size();i++){
    Node* temp = new Node(arr[i]);
    move->next = temp;
    move = temp ; 
   }
   return head;
}

int main (){
    vector<long>arr={2,3,4,5};
    Node* head = coverttolist(arr);
    cout<<head->data;


}

