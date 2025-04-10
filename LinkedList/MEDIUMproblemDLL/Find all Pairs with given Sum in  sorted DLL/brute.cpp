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
vector<pair<int,int>>findPair(Node* head , int sum){
    Node* temp1 = head ;
    vector<pair<int,int>>ans ; 
    while(temp1){
        Node* temp2 = temp1->next ; 
        while(temp2 != NULL && temp1->data + temp2->data <= sum){
            if(temp1->data + temp2 ->data == sum){
               ans.push_back({temp1->data , temp2->data});
            }
            temp2 = temp2->next ; 
        }
        temp1 = temp1->next ;
    }
    return ans ; 
   
}
int main (){
    Node* head = new Node(1);
    head->next = new Node(2, nullptr , head);
    head->next->next = new Node(3 ,nullptr , head->next);
    head->next->next->next = new Node(4 , nullptr , head->next->next);
    head->next->next->next->next = new Node(9, nullptr , head->next->next->next);

   
   int s = 5 ;
   vector<pair<int,int>>ans = findPair(head , s );
    for(auto it : ans){
        cout<<it.first<<" ,  "<<it.second<<endl;
    }


}
