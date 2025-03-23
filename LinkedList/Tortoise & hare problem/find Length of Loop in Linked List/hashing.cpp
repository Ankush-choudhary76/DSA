#include<bits/stdc++.h>
using namespace std ;
struct Node{
    int data ;
    Node* next ; 

    Node(int data1) : data(data1) , next(nullptr) {}
    Node(int data1 , Node* next1) : data(data1) , next(next1) {}
};

int detectaloopcycle(Node* head){
    unordered_map<Node* , int>vismpp;
    Node* temp = head ; 
    int timer = 0 ; 
    while(temp){
        if(vismpp.find(temp)!= vismpp.end()){
         int len = timer - vismpp[temp];
         return len  ; 
        }
        vismpp[temp] = timer;
        temp = temp->next ; 
        timer++ ; 
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
       
    int  n = detectaloopcycle(head );
    cout<<n;
        delete sec ;
        delete th ; 
        delete  fou ; 
        delete fiv ; 
        delete six ; 
}
