#include<bits/stdc++.h>
using namespace std ;
struct Node
{
    int data ;
    Node* next ;
    Node ( int data1 , Node* next1){
         data = data1 ;
         next = next1;
    }
    Node ( int data1 ){
        data = data1 ;
        next = nullptr;
    }
};

int findlength( Node* head ){
    int cnt = 0 ;
    Node* temp = head ;
     while(temp){
      cout<<temp->data<<" ";
      temp = temp ->next ;
        cnt ++ ;
     }
     cout<<endl ;
     return cnt ; 
}
int main (){
    
 Node* head = new Node(2);
     head->next = new Node(4);
     head->next->next = new Node(6);
     head->next->next->next = new Node(8);
    cout<< findlength(head);
     

}

