#include<bits/stdc++.h>
using namespace std ;
struct Node
{
  int data ;
  Node* next ;
  Node* back;
   Node(int data1 ): data(data1) , next(nullptr) , back(nullptr){};
   Node(int data1 , Node* next1 , Node* back1): data(data1) , next(next1) , back(back1){};
};
Node* RemoveDuplicatesFromSortedDLL(Node* head ){
     Node* temp = head ;
     while(temp != NULL && temp->next != NULL){
        Node* nextNode = temp->next ;
        while(nextNode != NULL && nextNode->data == temp->data){
            Node* duplicale  = nextNode;
            nextNode =  nextNode ->next;
            free(duplicale);
        }
        temp->next = nextNode;
        if(nextNode) nextNode->back = temp ; 
        temp = temp->next ; 

    }
    return head ; 
}
void printDLL(Node* head){
    while(head){
        cout<<head->data<<" ";
        head = head->next ; 
    }
}
int main (){
    Node* head = new Node(1);
    head->next = new Node(1 , nullptr , head);
    head->next->next = new Node(1, nullptr , head->next);
    head->next->next->next = new Node(2, nullptr , head->next->next);
    head->next->next->next->next = new Node(3, nullptr , head->next->next->next);
    head->next->next->next->next->next = new Node(3, nullptr , head->next->next->next->next);
    head->next->next->next->next->next->next = new Node(4, nullptr , head->next->next->next->next->next);
   
   
   Node* nn = RemoveDuplicatesFromSortedDLL(head);
    printDLL(nn );


}


