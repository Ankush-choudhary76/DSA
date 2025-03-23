#include<bits/stdc++.h>
using namespace std ;
struct Node
{
   int data ;
   Node* next ;
    Node(int data1) : data(data1) , next(nullptr) {}
};
Node* converttoll(vector<int>&arr){
    Node* head = new Node(arr[0]);
    Node* move = head ;
    for(size_t i = 1 ; i< arr.size() ; i ++){
        Node* temp = new Node(arr[i]);
        move->next = temp;
        move = temp ;
    }
    return head ;
}
void print(Node* head ){
    while(head){
        cout<<head->data<<" ";
        head = head->next;
    }
    cout<<endl;
}
Node* deletehead(Node* head){
    Node* temp = head ; 
    head = head->next;
    free(temp); // delete temp ; 
    return head;
}
int main (){
    vector<int>arr ={2,4,6,8};
    Node* head = converttoll(arr);
    cout<<"befor DELETE head \n";
    print(head);
    Node* newhead = deletehead(head);
    cout<<"after DELETE head \n";
     print(newhead);

}

