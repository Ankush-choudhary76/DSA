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
Node* DELETEallOCCURRENCEofKEYinDLL(Node* head , int key ){
    Node* temp = head ; 
    while(temp){
        if(temp->data == key){
            if(temp == head ){
                head = head->next ; 
            }
            Node* prev = temp->back ;
            Node* front = temp->next ; 
            if(prev) prev->next = front ; 
            if(front) front -> back = prev ; 
            free(temp);
            temp = front ; 
        }else{
            temp = temp->next ; 
        }
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
    Node* head = new Node(10);
    head->next = new Node(4 , nullptr , head);
    head->next->next = new Node(10, nullptr , head->next);
    head->next->next->next = new Node(10 , nullptr , head->next->next);
    head->next->next->next->next = new Node(6, nullptr , head->next->next->next);
    head->next->next->next->next->next = new Node(10, nullptr , head->next->next->next->next);
   
   int key = 10 ;
   Node* nn = DELETEallOCCURRENCEofKEYinDLL(head , key );
    printDLL(nn );


}


