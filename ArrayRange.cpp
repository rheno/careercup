/* http://www.careercup.com/question?id=5676298150084608  */
/*		rhenobudiasa@yahoo.com			  */

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;



int main() {
   
  vector< pair<int,int> > vp;
  
  int N, first, second;
 
  cout<<"Array range length : ";
  cin>>N;
  
  cout<<"Input :"<<endl; 
  for(int i=0;i<N;i++){

	cin>>first>>second;

        vp.push_back(pair<int,int>(first,second));
  }
  

  //Skip if already sort
  sort(vp.begin(), vp.end());

  pair<int,int> temp = vp[0];
  
  vector< pair<int,int> > ans;
  
  ans.push_back(temp);

  for(int i=1;i<vp.size();i++){

  	if(vp[i].first > temp.first && vp[i].second > temp.second){
        	
	  ans.push_back(vp[i]);  

	  temp = vp[i];

	}
  }
  
  cout<<"[";
  for(int i=0;i<ans.size();i++){
	if(i!=0){
    		cout<<",";
        }	
	cout<<"("<<ans[i].first<<","<<ans[i].second<<")";
	
  }

  cout<<"]"<<endl;
    
  return 0;
}
