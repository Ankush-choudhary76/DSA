#include<bits/stdc++.h>
using  namespace std ;
struct Node{
    int data ; 
    Node* next ; 
    Node* back ;
    Node(int data1 ) : data(data1)  , next(nullptr) , back(nullptr) {}
    Node(int data1  , Node* next1 , Node* back1) : data(data1)  , next(next1) , back(back1) {}
};
Node* insert(Node* head , int val ){
    Node* nn = new Node(val ,head , nullptr );
    head->back = nn ;
    return nn ;
}
Node* beforekthelement(Node* head  , int val , int k ){
    if(k==1 ){
        return insert(head , val );
    }
    int cnt =0 ; 
    Node* temp = head ;
    while(temp){
        cnt++;
    if(cnt == k ) break ;
    temp = temp->next;
    }
    Node* prev = temp->back ; 
    Node* nn = new Node(val , temp , prev);
    prev->next = nn ; 
    temp->back = nn ; 
    return head  ; 
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
    int val = 11 ; 
    int k = 1 ;
   Node* hn = beforekthelement(head , val  , k );
   printDLL(hn);
}
