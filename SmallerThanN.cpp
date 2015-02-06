#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <bitset>
#include <set>


using namespace std;


/* http://www.careercup.com/question?id=5631511174840320 */



int smallerThanN(int N, int sum){
    if(N == 0){
      return sum;
    }

    if(N % 3 == 0 || N % 5 == 0){
      sum+=N;
    }
    return smallerThanN(N-1, sum);
}

int main() {
      
    int N;

    cin>>N;

    cout<<smallerThanN(N-1, 0)<<endl;
    
    return 0;
}

