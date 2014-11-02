
/*

Answer for :
http://www.careercup.com/question?id=5092486548553728

*/

#include <iostream>
#include <vector>
#include <cstdio>
#include <set>
#include <utility>

using namespace std;


bool isTwoEdit(string s1, string s2){
   set<char> set1(s1.begin(), s1.end()); 
   set<char> set2(s2.begin(), s2.end()); 
   int count=0;

    for(set<char>::iterator it=set1.begin();it!=set1.end();it++){
      
       set<char>::iterator it2 = set2.begin(); 
       
       while(it2!=set2.end()){
          if(*it == *it2){
            count++;  
          }
          it2++;
       }
    }



    if(count==2){
      return true;
    }else{
      return false;
    }  
}


int main(){

  int n;
  string s1, s2;
  vector< pair<string,string> > v;
  set<char> sol;
 
  cin>>n;

  for(int i=0;i<n;i++){    
    cin>>s1;
    cin>>s2;
    v.push_back(make_pair(s1,s2));
    cout<<isTwoEdit(v[i].first, v[i].second)<<endl; //0 for false 1 for true
  }
    


 
  return 0;
}
