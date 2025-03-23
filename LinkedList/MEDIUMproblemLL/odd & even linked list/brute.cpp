#include<bits/stdc++.h>
using namespace std ;  
struct  Node
{
   int data ;
   Node* next ; 
   Node(int data1 ) : data(data1) , next(nullptr ) {}
   Node(int data1 , Node* next1) : data(data1) , next(next1) {}
};
Node* OddorEven(Node* head){
    if(head == nullptr || head->next == nullptr){
        return head ; 
    }
    Node* temp = head ; 
    vector<int>arr;
    while(temp != nullptr && temp->next != nullptr){
        arr.push_back(temp->data);
        temp = temp->next->next ; 
    }
    if(temp != nullptr){
        arr.push_back(temp->data);
    }
    temp = head->next ; 
     while(temp !=nullptr && temp->next != nullptr){
        arr.push_back(temp->data);
        temp = temp->next->next ; 
    }
    if(temp != nullptr){
        arr.push_back(temp->data);
    }
    
    int i =0 ; 
    temp = head ; 
    while(temp != nullptr){
        temp->data = arr[i];
        i++;
        temp = temp ->next ; 
    }
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

    Node* nn = OddorEven(head);
    printLL(nn) ; 
}
