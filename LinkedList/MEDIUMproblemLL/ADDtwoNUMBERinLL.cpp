#include<bits/stdc++.h>
using namespace std ;
struct Node{
    int data ;
    Node* next ;
    Node* back ;
    Node(int data1 ) : data(data1) ,next(nullptr) , back(nullptr){}
     Node(int data1 , Node* next1,Node* back1 ) : data(data1) ,next(next1) , back(back1){}
};
Node* convertTOll(vector<int>&arr){
       Node* head = new Node(arr[0]);
       Node* move = head ; 
       for(size_t i =1 ; i<arr.size() ; i++){
        Node* temp = new Node(arr[i] , nullptr , move);
        move->next = temp ; 
        move = temp ;
       }
       return head ; 
}
// Node* add(Node* head1 , Node* head2){
//     Node* t1 = head1 ;
//     Node* t2 = head2 ;
//      Node* dummmyNode = new Node(-1);
//      Node* curr = dummmyNode;
//      int carry = 0 ; 
//      while(t1 != nullptr || t2 != nullptr){
//         int sum = carry;
//         if(t1 != nullptr ){
//             sum += t1->data;
//         }
//         if(t2 != nullptr ){
//             sum += t2->data;
//         }
//         Node* nn = new Node(sum%10);
//         carry = sum/10 ; 
//         curr->next = nn ;
//         curr = curr->next ;
//         if(t1 != nullptr){
//             t1 = t1->next ; 
//         }
//         if(t2 != nullptr){
//             t2 = t2->next ; 
//         }
//          if (carry){
//             nn = new Node( carry );
//             curr->next = nn ; 
//         }

//     }
//     return dummmyNode->next  ; 
// }
Node* addTwoNumbers(Node* l1, Node* l2) {
        Node *dummy = new Node(-1); 
        Node *temp = dummy; 
        int carry = 0;
        while( (l1 != NULL || l2 != NULL) || carry) {
            int sum = 0; 
            if(l1 != NULL) {
                sum += l1->data; 
                l1 = l1 -> next; 
            }
            
            if(l2 != NULL) {
                sum += l2 -> data; 
                l2 = l2 -> next; 
            }
            
            sum += carry; 
            carry = sum / 10; 
            Node* n = new Node(sum % 10); 
            temp -> next = n; 
            temp = temp -> next; 
        }
        return dummy -> next; 
    }
void printDLL(Node* head){
      Node* temp = head ;
      while(temp){
        cout<<temp->data<<" ";
        temp = temp->next ; 
      }
      cout<<endl ; 
}
int main (){
    vector<int>arr = {3,5};
    vector<int> brr = {4,5,9,9};
    Node* H1 = convertTOll(arr);
    Node*  H2 = convertTOll(brr);

//    Node* nn = add(H1 , H2);
   Node* nn = addTwoNumbers(H1 , H2);
   printDLL(nn);

}
