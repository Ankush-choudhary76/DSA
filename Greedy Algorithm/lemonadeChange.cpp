#include<bits/stdc++.h> 
using namespace std ; 
 bool fun(vector<int>bill){
    int five = 0 , ten =0 ; 

    for(int i= 0 ; i<bill.size() ; i++){
        if(bill[i]== 5 ){
            five ++; 
        }else if(bill[i]== 10 ){
            if(five) {
                five -- ; 
                ten++;
            }else return false ; 
        }else{
            if(five && ten ){
                five -- ;
                ten -- ;
            }else if (five >= 3 ){
                five -= 3 ; 
            }else return false ; 
        }
    }
    return true ; 
 }
int main (){
    vector<int>bills = {5,5,5,10,10,20};

    fun(bills) ? cout<<"True " : cout<<"False";
}
