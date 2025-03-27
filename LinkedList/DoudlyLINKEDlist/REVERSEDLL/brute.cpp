#include<bits/stdc++.h>
using  namespace std ;
struct Node{
    int data ; 
    Node* next ; 
    Node* back ;
    Node(int data1 ) : data(data1)  , next(nullptr) , back(nullptr) {}
    Node(int data1  , Node* next1 , Node* back1) : data(data1)  , next(next1) , back(back1) {}
};
void reverseADLL(Node* head){
    Node* temp = head ;
    stack<int>st ;
    while(temp){
        st.push(temp->data);
        temp = temp->next;
    }
    temp = head ;
    while(temp){
        temp->data = st.top();
        st.pop();
        temp = temp->next ; 
    }
    return ; 
}
void printDLL(Node* head){
    while(head){
        cout<<head->data<<" ";
        head = head->next ; 
    }
}

int main (){
   Node* head = new Node(2);
   head->next = new Node(4 ,nullptr , head);
      head->next->next = new Node(6 ,nullptr , head->next);
         head->next->next->next = new Node(8 ,nullptr , head->next->next);
            head->next->next->next->next = new Node(10 ,nullptr , head->next->next->next);

   reverseADLL(head);

   printDLL(head);
}
