#include<bits/stdc++.h>
using namespace std ;
struct Node{
    int data ;
    Node* next ; 

    Node(int data1) : data(data1) , next(nullptr) {}
    Node(int data1 , Node* next1) : data(data1) , next(next1) {}
};
int findlen(Node* fast , Node* slow ){
    int cnt = 1 ;
    fast = fast->next ;
    while(fast != slow ){
        cnt ++;
        fast = fast->next;
    }
    return cnt;
}
int detectAloopcycle(Node* head){
   Node* slow = head ; Node* fast = head ; 

   while(fast != NULL && fast->next !=NULL){
     slow = slow ->next ;
     fast = fast->next->next ; 
     if(fast == slow ){
        return findlen(fast , slow ); 
    }
    }
    return 0 ; 
} 
int main (){
    Node* head= new Node(1) ; 
        Node* sec= new Node(2) ; 
            Node* th= new Node(3) ; 
                Node* fou= new Node(4) ; 
                    Node* fiv= new Node(5) ; 
                    Node* six = new Node(6);
        head->next =sec ; 
        sec->next = th ;
        th->next  =fou ; 
        fou->next = fiv ; 
        fiv->next = six ;
        six->next = th ; 
       
    int  n = detectAloopcycle(head );
    cout<<n;
        delete sec ;
        delete th ; 
        delete  fou ; 
        delete fiv ; 
        delete six ; 
}
