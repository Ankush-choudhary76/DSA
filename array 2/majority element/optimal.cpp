 #include<bits/stdc++.h>
using namespace std ;
                
int main (){
    vector<int>arr={7,7,5,7,5,1,5,7,5,5,7,7,5,5,5,5};
    int n = arr.size();
    int element ;
    int count =0 ;
    int r =0;
    for(int i=0 ;i<n;i++){
        if(count==0){
            count = 1 ;
            element= arr[i];}
                
       else if(arr[i]== element){
            count ++;        
        }else {
            count --  ;
        }   
    }
    cout<<element<<endl;
    int count11=0;
for(int  i=0 ; i<n;i++){
    if(arr[i]== element) count11++;
} 
if(count11> n/2) cout<<element;
else cout<< " -1";              
}