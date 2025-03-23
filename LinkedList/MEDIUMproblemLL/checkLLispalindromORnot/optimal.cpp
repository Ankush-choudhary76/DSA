#include<bits/stdc++.h>
using namespace std ;  
struct  Node
{
   int data ;
   Node* next ; 
   Node(int data1 ) : data(data1) , next(nullptr ) {}
   Node(int data1 , Node* next1) : data(data1) , next(next1) {}
};
Node* reverseLL(Node* head ){
    if(head == NULL || head->next==NULL)  return head ; 
    Node* newnode = reverseLL(head->next);
    Node* front = head->next ; 
    front->next = head; 
    head->next = nullptr;
    return newnode;

}
bool  palindromeORnot(Node* head ){
       if(head == NULL && head->next==NULL)  return true ; 
       Node* fast = head ; 
       Node* slow = head ;
       while(fast->next != nullptr && fast->next->next != nullptr){
            slow = slow->next;
            fast = fast->next->next ; 
        }
        Node* nn  = reverseLL(slow->next);
        Node* first = head ;
        Node* second = nn ; 
        while(second != nullptr){
            if(first->data != second->data){
                reverseLL(nn);
                return false ; 
            }
            first = first->next;
            second = second->next ; 
        }
        reverseLL(nn);
    return true ; 
}
int main (){
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next ->next->next= new Node(2);
     head->next ->next->next->next= new Node(1);
     palindromeORnot(head) ? cout<<"True" : cout<<"False" ; 
}
