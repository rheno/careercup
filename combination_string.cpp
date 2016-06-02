/* https://careercup.com/question?id=5659801074794496  */


#include <iostream>
#include <queue>
#include <string>

using namespace std;

struct encoder{
  string text;
  string encode;
};

int main(){
  //97 - 122
  
  string encode;
  cin>>encode;
  
  
  queue<encoder> q;
  encoder e;
  e.text = "";
  e.encode = encode;
  q.push(e); 
  

  while(!q.empty()){
	
	if(q.front().encode.length() <= 0){
	  cout<<q.front().text<<endl;
	}	
	
        if(q.front().encode.length() > 0){
	
		if(q.front().encode.length() >= 1){
			encoder e1;
			e1.text = q.front().encode.substr(0, 1);
			e1.encode = q.front().encode.substr(1, q.front().encode.length());
			if(stoi(e1.text) + 96 >= 97 && stoi(e1.text) + 96 <= 122){
				string s1;
				s1.insert(s1.begin(), (char)(stoi(e1.text) + 96));
				s1 = q.front().text + s1;
				e1.text = s1;
				q.push(e1);
			}
		}

		if(q.front().encode.length() > 1){
			encoder e2;
                	e2.text = q.front().encode.substr(0, 2);
                	e2.encode = q.front().encode.substr(2, q.front().encode.length());
			if(stoi(e2.text) + 96 >= 97 && stoi(e2.text) + 96 <= 122){
				string s2;
                                s2.insert(s2.begin(), (char)(stoi(e2.text) + 96));
				s2 = q.front().text + s2;
                                e2.text = s2;
                		q.push(e2);
			}
		}
	}

	q.pop();
  }


  return 0;
}
