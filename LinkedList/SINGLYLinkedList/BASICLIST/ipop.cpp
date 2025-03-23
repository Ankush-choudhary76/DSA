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


int main (){
    vector<int>arr={2,3,4,5};
    Node* head = new Node(arr[0]);
    cout<<head->data<<" ";
    cout<<head->next;
}

