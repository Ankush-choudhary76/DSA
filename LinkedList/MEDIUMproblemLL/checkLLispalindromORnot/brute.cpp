#include<bits/stdc++.h>
using namespace std ;  
struct  Node
{
   int data ;
   Node* next ; 
   Node(int data1 ) : data(data1) , next(nullptr ) {}
   Node(int data1 , Node* next1) : data(data1) , next(next1) {}
};
bool  palindromeORnot(Node* head ){
    Node*  temp = head ;
    stack<int>st;
    while(temp){
        st.push(temp->data);
        temp = temp->next;
    }
    temp = head ;
    while(temp){
        if(temp->data != st.top()){
            return false;
        }
        st.pop();
        temp = temp->next ; 
    }
    return true ; 
}
int main (){
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next ->next->next= new Node(2);
     head->next ->next->next->next= new Node(1);
     palindromeORnot(head) ? cout<<"True" : cout<<"False" ; 
}
