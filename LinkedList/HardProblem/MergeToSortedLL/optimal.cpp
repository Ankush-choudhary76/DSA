#include<bits/stdc++.h>
using namespace std ; 

struct Node{
    int data ;
    Node* next ;
    Node(int data1 ) : data(data1) , next(nullptr){};

};
Node* convertTOLL(vector<int>arr){
    Node* head = new Node(arr[0]);
    Node* temp = head ; 
    for(size_t i = 1 ; i<arr.size() ; i++){
        temp->next = new Node(arr[i]);
        temp = temp->next ; 
    }
    return head ; 
}
Node* mergeTOsortedLL(Node* head1 , Node* head2){
    Node* t1 = head1;
    Node* t2 = head2 ;
    Node* dummyNode = new Node(-1);
    Node* temp = dummyNode ; 
    while(t1 != NULL && t2 != NULL){
        if(t1->data <= t2->data){
                temp->next =t1 ;
                temp = temp->next ; 
                t1 = t1->next; 
        }else{
                temp->next =t2 ;
                temp = temp->next ; 
                t2 = t2->next; 
        }
    }
    if(t1) temp->next = t1;
    if(t2) temp->next = t2 ; 
    return dummyNode->next ; 
}
void printLL(Node* head){
    while(head){
        cout<<head->data<<" ";
        head = head->next ; 
    }
}
int main (){
    vector<int>arr={2,4,6,8};
    vector<int>brr= {1,3,3,10,11,14};
    Node* head1 = convertTOLL(arr);
    Node* head2 = convertTOLL(brr);
    Node* L3 = mergeTOsortedLL(head1 , head2);
    printLL(L3);

}
