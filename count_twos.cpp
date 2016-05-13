
/* https://careercup.com/question?id=5688041801777152 */

#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;


int solution(int n){
   
   int result = 0;
   char s[1000];
   while(n >= 0){
     
     sprintf(s,"%d",n);
     
     for(int i=0;i<strlen(s);i++){
	if(s[i] == '2'){
	   result++;
        }
     }
    
     n--;
   }
  
   return result;
}

int main(){
  
  int n;

  cin>>n;

  cout<<solution(n)<<endl;
 
  return 0;
}
