#include<bits/stdc++.h>
using namespace std ;  
struct  Node
{
   int data ;
   Node* next ; 
   Node(int data1 ) : data(data1) , next(nullptr ) {}
   Node(int data1 , Node* next1) : data(data1) , next(next1) {}
};
  
void insertLL(Node*& head , int val){
  Node* nn = new Node(val);
    if(head == nullptr){
        head = nn ; 
        return;
    }
    Node* temp = head ; 
    while (temp->next)
    {
       temp = temp->next;
    }
    temp->next = nn ; 
    return ; 
}

void printLL(Node* head){
    while(head){
        cout<<head->data<<" ";
        head = head->next ; 
    }
    return ; 
}
Node* intersection(Node* head1 , Node* head2){
      Node*  d1 = head1 ; Node* d2 = head2 ;
      while(d1 != d2 ){
        d1 = d1==nullptr ? head2 : d1->next;
        d2 = d2 == nullptr ? head1 : d2->next ;
      }
      return d1 ; 
}
int main (){
  Node* head = nullptr ; 
    insertLL(head , 1);
    insertLL(head , 3);
    insertLL(head , 4);
    insertLL(head , 2);
    insertLL(head , 6);
    Node* head1 = head ; 
    head = head->next->next->next ; 
    Node* headsec = nullptr ; 
    insertLL(headsec , 11);
    Node* head2 = headsec;
    headsec->next = head;
    cout<<"list1 : " ; printLL(head1) ;
    cout<<"\nlist2 : ";printLL(head2);

    Node* ans = intersection(head1 , head2);
    ans == nullptr ? cout<<"\nnot intersection" : cout<<"\nintersection" ; 

}
