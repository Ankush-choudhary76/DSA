#include<bits/stdc++.h>
using  namespace std ;
struct Node{
    int data ; 
    Node* next ; 
    Node* back ;
    Node(int data1 ) : data(data1)  , next(nullptr) , back(nullptr) {}
    Node(int data1  , Node* next1 , Node* back1) : data(data1)  , next(next1) , back(back1) {}
};
Node* insertDLL(Node* head , int val ){
    Node* nh = new Node(val , head , nullptr);
    head->back = nh ; 
    return nh  ; 

}
Node* after(Node* head , int val ){
    Node* nh = new Node(val , head->next ,head); 
    head->next = nh ; 
    if (nh->next != nullptr) {
        nh->next->back = nh;
    }

    return head ; 
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
    Node* nn = insertDLL(head , val );
cout<<"BEFORE HEAD \n";
   printDLL(nn);
   
   Node* hn = after(head , val );
cout<<"\nAFTER HEAD \n";
   printDLL(hn);
}
