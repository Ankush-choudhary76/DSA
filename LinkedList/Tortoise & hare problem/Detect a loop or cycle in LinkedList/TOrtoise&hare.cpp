#include<bits/stdc++.h>
using namespace std ;
struct Node{
    int data ;
    Node* next ; 

    Node(int data1) : data(data1) , next(nullptr) {}
    Node(int data1 , Node* next1) : data(data1) , next(next1) {}
};

bool detectaloopcycle(Node* head){
       Node* slow  = head ; 
       Node* fast = head ; 
        while(fast != NULL && fast->next != NULL){
            if(fast == slow){
                return true;
            } 
            fast = fast->next->next;
            slow = slow ->next ; 
        }
        return false ; 
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
       
    bool n = detectaloopcycle(head );
    n ? cout << "True " : cout<<"False" ; 
        delete sec ;
        delete th ; 
        delete  fou ; 
        delete fiv ; 
        delete six ; 
}
