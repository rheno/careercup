/* Solution For https://careercup.com/question?id=5687065971785728 */

#include <iostream>
#include <string>
#include <vector>
#include <map>

using namespace std;

int hash_code(string s){
   int hash = 0;
   for(int i=0;i<s.size();i++){
      hash+=(int)s[i];
   }

   return hash;
}

int main(){
  
  int N;
  vector<string> v;
  cin>>N;

  for(int i=0;i<N;i++){
    string s;
    cin>>s;
    v.push_back(s); 
  }

  map<string, int> a;

  for(int i=0;i<v.size()-1;i++){
	for(int j=i+1;j<v.size();j++){
	    int h1 = hash_code(v[i]);
            int h2 = hash_code(v[j]);
	    if(h1 == h2){
		if(a[v[i]] != 1){
		   cout<<v[i]<<" ";
		}
		if(a[v[j]] != 1){
		   cout<<v[j]<<" ";
		}
		a[v[i]] = 1;
                a[v[j]] = 1;

	    }
	}
  } 

  return 0;
}

