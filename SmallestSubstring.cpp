#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <bitset>
#include <set>


using namespace std;


/* http://www.careercup.com/question?id=5092414932910080 */



int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
      
    set<char> s;
    int j;
    string str, str2;
    int hash, hash2;
    s.insert('a');  
    s.insert('b');  
    s.insert('c');   


    cin>>str;

    for(set<char>::iterator i = s.begin(); i!=s.end(); i++){
      hash+=(int)(*i);
    }
    

    for(int i=0;i<str.length()-s.size()+1;i++){
      j=i;
      hash2 = 0;
      str2.clear();
      while(j<(i+3)){    
        str2.push_back(str[j]);
        hash2+=(int)str[j];
        j++;
      }

      if(hash2 == hash){
          cout<<str2<<endl;
          break;
      }
      
    }  
    

    
    
    return 0;
}

