/* https://www.careercup.com/question?id=6226621037019136 */

#include <iostream>
#include <sstream>

using namespace std;

string reverseWords(string wordString){

   stringstream ss(wordString);
   string token, result;

   while(ss >> token){
     result = token + " "+ result;
   }
   
   return result; 
}

int main(){

   cout<<reverseWords("Man bites dog")<<endl;
   return 0;
}
