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
Node* deleteDLLHead(Node* head ){
    if(head == nullptr || head->next == nullptr ){
        return nullptr;
    }
    Node* prev = head ; 
    
    head = head->next ;
    head->back = nullptr ;
    prev->next = nullptr ; 
    free(prev);
    return head  ; 

}
Node* deleteDLLTail(Node* head ){
    if(head == nullptr || head->next == nullptr ){
        return nullptr;
    }
    Node* tail = head ; 
    while(tail->next != nullptr){
        tail = tail ->next ; 
    }
      Node* prev = tail->back ; 
      prev->next = nullptr; 
      tail->back = nullptr ;
      delete tail   ;
      free(prev);
      return head ;
}
Node* deleteDLL(Node* head , int k  ){
    Node* temp = head ;
    int cnt = 0 ;
    while(temp){
        cnt ++ ;
      if(cnt == k ) break ; 
      temp = temp ->next ; 
    }
    Node* prev = temp->back ;
    Node* front = temp->next ; 
    if(prev == nullptr && front == nullptr){
           delete temp ; 
           return nullptr ; 
    }else if ( prev == nullptr){
        return deleteDLLHead(head);
    }else if(front == nullptr ){
        return deleteDLLTail(head);
    }
    prev ->next = front ; 
    front->back = prev ; 
    temp->back = nullptr ;
    temp->next = nullptr ; 
    delete temp ; 
    return head ; 
}
void printDLL(Node* head){
    while(head){
        cout<<head->data<<" ";
        head = head->next;
    }
}
int main (){
   Node* head = new Node(2);
   head->next = new Node(4 , nullptr , head);
   head->next->next = new Node(6, nullptr , head->next);
   head->next->next->next = new Node(8 , nullptr , head->next->next);
   int k =  2;
   Node* nn = deleteDLL(head , k );
    printDLL(nn) ;

}
