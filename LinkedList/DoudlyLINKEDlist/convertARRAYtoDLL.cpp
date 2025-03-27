#include<bits/stdc++.h>
using namespace std ;
class Node{
public:
int data ;
Node* next ;
Node* back;
Node(int data1 , Node* next1 , Node* back1): data(data1) , next(next1) , back(back1){}
Node(int data1 ): data(data1) , next(nullptr) , back(nullptr){}

};
Node* convertToDLL(vector<int>&arr){
    Node* head = new Node(arr[0]);
    Node* move = head ;
    for(size_t i = 1 ; i <arr.size(); i++){
        Node* temp = new Node(arr[i] ,nullptr ,move );
        move->next = temp ;
         move = temp ;
    }
    return head ; 
}
void printDLL(Node* head){
    while(head){
        cout<<head->data<<" ";
        head = head->next;
    }
}
int main (){
    vector<int>arr={2,4,6,8,10};
    Node* head = convertToDLL(arr);
    printDLL(head) ;

}
