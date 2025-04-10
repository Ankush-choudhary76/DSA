#include<bits/stdc++.h>
using namespace std ; 

struct node{
    int data ;
    node* next ; 
    node* cn; 
    node(int data1 ): data(data1 ) , next(nullptr) , cn(nullptr){}
};
node*convertLL(vector<int>&arr){
       node* head =  new node (arr[0]);
       node* temp = head ; 
       for( size_t i=1 ; i<arr.size() ; i++){
        temp->cn = new node(arr[i]);
        temp = temp->cn;
       }
      
       return head ; 
} 
node* flatten(node* head){
    
    vector<int>arr;
    while(head){
        node* t1 = head ;
         
         while (t1)
         {
           arr.push_back(t1->data);
           t1 = t1->cn;
         }
         head = head->next ; 
    }
    sort(arr.begin() , arr.end());
    return convertLL(arr) ; 
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
