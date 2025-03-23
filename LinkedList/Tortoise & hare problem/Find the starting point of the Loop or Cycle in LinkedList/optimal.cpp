#include<bits/stdc++.h>
using namespace std ;
struct Node{
    int data ;
    Node* next ; 

    Node(int data1) : data(data1) , next(nullptr) {}
    Node(int data1 , Node* next1) : data(data1) , next(next1) {}
};

Node* startingPointOFLoop(Node* head){
       Node* slow = head ;
       Node* fast = head ; 
       while( fast != NULL && fast->next != NULL){
               slow = slow ->next ;
               fast = fast->next->next ; 
               if(fast == slow ){
                    slow = head ; 
                    while(fast != slow ){
                        slow = slow ->next ;
                        fast = fast->next ; 
                    }
                    return slow ; 
                }
        }
        return NULL ; 
}

int main (){
    Node* head= new Node(1) ; 
        Node* sec= new Node(2) ; 
            Node* th= new Node(15) ; 
                Node* fou= new Node(4) ; 
                    Node* fiv= new Node(5) ; 
                    Node* six = new Node(6);
        head->next =sec ; 
        sec->next = th ;
        th->next  =fou ; 
        fou->next = fiv ; 
        fiv->next = six ;
        six->next = th ; 
       
    Node* n = startingPointOFLoop(head );
    n ? cout <<n->data : cout<<"NUll" ; 
        delete sec ;
        delete th ; 
        delete  fou ; 
        delete fiv ; 
        delete six ; 
}
