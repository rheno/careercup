
/*

Answer for :
http://www.careercup.com/question?id=5705581721550848

*/

#include <iostream>
#include <vector>
#include <cstdio>
#include <set>
#include <utility>

using namespace std;


string foundMoreThanOne(string s1, string s2){
  while((int)s1.find(s2) != -1){ 
      s1.erase(s1.find(s2), s2.length());
  }
  return s1;
}


int main(){

  int n;
  
  bool result;



  vector<string> dict;
  dict.push_back("world");
  dict.push_back("hello");
  dict.push_back("super");
  dict.push_back("hell");

  //Insert your input here
  
  cin>>n;
  for(int i=0;i<n;i++){
    string input;
    cin>>input;

    for(int j=0;j<dict.size();j++){
        
        if((int)input.find(dict[j]) != -1){          
          input.erase(input.find(dict[j]), dict[j].length());
          input = foundMoreThanOne(input,dict[j]);
        }

    }
    if(input.length() == 0 ){
       result = true;
    }else{
      result = false;
    }
    cout<<result<<endl;
  }  

 
  return 0;
}
