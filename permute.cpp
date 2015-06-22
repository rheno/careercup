
/* http://www.careercup.com/question?id=5741988412391424 */


#include <iostream>
#include <vector>

using namespace std;

void permute(vector<string> v, string s, int curr){

  if(curr == v.size()){
    cout<<s<<endl;
    return;
  }

  for(int i=0;i<v[curr].length();i++){
     
     s.push_back(v[curr][i]);
     
     permute(v,s,curr+1);
     
     //Triggerd backtracking
     s.erase(s.end()-1);
  }
  

}


int main(){
  
  int N;
  string input;
  vector<string> v;
  
  cout<<"Size = ";
  cin>>N;
  cout<<endl;
  
  for(int i=0;i<N;i++){
     cout<<"input "<<i+1<<" : ";
     cin>>input;
     v.push_back(input);
  }

  cout<<"Result : "<<endl;
  
  permute(v,"",0);
   
  return 0;
}
