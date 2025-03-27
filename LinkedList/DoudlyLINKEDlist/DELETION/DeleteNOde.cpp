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
void deleteNode(Node* temp ){
    Node* prev = temp->back ;
    Node* front = temp->next ; 
    if(front == nullptr){
        prev->next = nullptr ;
        temp->back = nullptr ; 
        free(temp);
        return ;
    }
    prev->next = front;
    front->back = prev ; 
    free(temp );
    return ; 
}
void printDLL(Node* head){
    while(head){
        cout<<head->data<<" ";
        head = head->next;
    }
}
int main (){
   Node* head = new Node(1);
   head->next = new Node(3 , nullptr , head);
   head->next->next = new Node(5 , nullptr , head->next);
   head->next->next->next = new Node(7 , nullptr , head->next->next);
    deleteNode(head->next);
    printDLL(head) ;

}
