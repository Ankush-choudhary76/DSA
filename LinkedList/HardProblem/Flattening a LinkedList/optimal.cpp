#include<bits/stdc++.h>
using namespace std ; 

struct node{
    int data ;
    node* next ; 
    node* cn; 
    node(int data1 ): data(data1 ) , next(nullptr) , cn(nullptr){}
};

node* flatten(node* head ){
    node* t1 = head ; 
      while(head ){
        node* t2  = head->next; 
        node* dum = new node(-1);
        node* aa = dum;
        while(t1 && t2){
            if(t1->data <= t2->data){
                aa->cn = t1;
                t1 = t1->cn;
            }else{
               aa->cn = t2;
                t2 = t2->cn;
            }
            aa = aa->cn ; 
        }
        if(t1) aa->cn = t1 ;
        if(t2) aa->cn=t2 ; 
        t1 = dum->cn;
        
         head = head->next ; 
      }
     
    return t1;
    
}
int main(){
    node* head = new  node (3 );
    head->next = new node(2);
    head->next->cn = new node(10);
    head->next->next = new node(1);
     head->next->next->cn = new node(7);
      head->next->next->cn->cn = new node(11);
       head->next->next->cn->cn->cn = new node(12);
        head->next->next->next = new node(4);
         head->next->next->next->cn = new node(9);
           head->next->next->next->next = new node(5);
             head->next->next->next->next->cn = new node(6);
               head->next->next->next->next->cn->cn = new node(8);

               node * nn = flatten(head);
               while(nn){
                cout<<nn->data<<" ";
                nn = nn->cn ; 
               }

}
