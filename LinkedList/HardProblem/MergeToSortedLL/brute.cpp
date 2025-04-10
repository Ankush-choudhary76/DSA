#include<bits/stdc++.h>
using namespace std;
struct Node
{
  int data ;
  Node* next ; 
  Node(int data1) : data(data1) , next(nullptr){}
  Node(int data1 , Node* next1) : data(data1) , next(next1){}
};
Node* convertTOLL(vector<int>arr){
    Node* head = new Node(arr[0]);
    Node* temp = head;
    for(size_t i =1 ; i<arr.size() ; i++){
        temp->next = new Node(arr[i]);
        temp = temp->next ; 
    }
    return head ;  
}
vector<int>mergeTOsortedLL(Node* L1_head  , Node* L2_head){
    vector<int>ans ;
    while(L1_head || L2_head){
        if(L1_head) {
            ans.push_back(L1_head->data);
            L1_head = L1_head->next;
        }
        if(L2_head) {
            ans.push_back(L2_head->data);
            L2_head = L2_head->next;
        }
    }
    sort(ans.begin() , ans.end());
    return ans ; 
}
void printLL(Node* L3_head){
    while(L3_head){
        cout<<L3_head->data<<" ";
        L3_head = L3_head->next;
    }
}
int main (){
    vector<int>arr={2,4,8,10};
    vector<int>brr={1,3,3,6,11,14};
    Node* L1_head = convertTOLL(arr);
    Node* L2_head = convertTOLL(brr);
    vector<int>ans = mergeTOsortedLL(L1_head , L2_head);
    Node* L3_head = convertTOLL(ans);
    printLL(L3_head);
}

