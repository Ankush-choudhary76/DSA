#include<bits/stdc++.h>
using namespace std ; 

struct Node{
    int data ;
    Node* next ;

    Node(int data1 ) : data(data1) , next(nullptr){}
    Node(int data1 , Node* next1 ) : data(data1) , next(next1){}
};
Node* findkth(Node* head , int k ){
    k-=1 ; 
    while(head != NULL && k>0){
        k--;
        head = head->next ; 
    }
    return head ; 
}
Node* reversenn( Node*  head){
    Node* prev = nullptr ; 
    Node* temp =  head ; 
    while(temp){
        Node* front = temp->next ; 
        temp->next = prev ; 
        prev = temp;
        temp = front ; 
    }
     return prev ; 
} 
Node* reverseNodeINkGROUP(Node* head , int k  ){
    Node* temp = head  ; 
    Node*  prev = nullptr ;
    while(temp){
      Node*  knode = findkth(temp, k );
          if(knode == nullptr){
                if(prev){
                    prev->next   = temp ;
                }
                break;
            }
            Node* nn = knode->next ; 
            knode->next = NULL;
            reversenn(temp); 
            if(temp == head ){
                head =  knode;
            }else{
                prev->next = knode;
            }
            prev = temp;
            temp = nn;        
    }
    return head ; 
}
Node* convertLL(vector<int>&arr){
         Node* head = new Node(arr[0]);
         Node* temp = head ; 
        for(size_t i =1 ; i<arr.size() ; i++){
            temp->next = new Node(arr[i]);
            temp = temp->next;
        }
     return head ; 
}
void printLL(Node* head ){
    while(head){
        cout<<head->data<<" ";
        head = head ->next ; 
    }

}
int main (){
  vector<int>arr = {1,2,3,4,5,6,7,8,9,10};
  Node* head = convertLL(arr);
  
  int k = 3 ; 
  Node* nn = reverseNodeINkGROUP(head , k);
  printLL(nn );
}
