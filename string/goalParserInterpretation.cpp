#include<bits/stdc++.h>
 using namespace std ;
  string interpret(string command) {
        string s ;
         for(int i=0 ;i<command.size();i++){
           if( command[i] == 'G'){
            s = s+ 'G';
           }else if( command[i] == '('){
            if(command[i+1]== 'a'){
                s = s+'a'+'l';
            }else s= s+ 'o';
           }
        }
      return s ;
    }
int main (){
  string strr = "G()(al)";
  string result = interpret(strr);
  for( auto it  : result){
    cout<<it<<" ";
  }
}