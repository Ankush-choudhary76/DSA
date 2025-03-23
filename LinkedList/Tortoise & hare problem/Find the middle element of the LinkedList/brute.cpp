#include<bits/stdc++.h>
using namespace std ;  
struct  Node
{
   int data ;
   Node* next ; 
   Node(int data1 ) : data(data1) , next(nullptr ) {}
   Node(int data1 , Node* next1) : data(data1) , next(next1) {}
};
 Node* middleELEMENT( Node* head ){
    int cnt = 0 ; 
    Node* temp = head ; 
    while(temp){
        cnt ++;
        temp = temp->next ;
    }
    int mid = (cnt/2)+1 ; 
    temp = head ; 
    while(temp){
        mid--;
        if(mid == 0 ){
            break ; 
        }
        temp = temp ->next ;
    }
    return temp ; 
 }

int main (){
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next ->next->next= new Node(4);
    head->next->next->next->next = new Node(5);
    head->next->next->next->next->next = new Node(6);

    Node* nn = middleELEMENT(head  );
    cout<<nn->data;
}
