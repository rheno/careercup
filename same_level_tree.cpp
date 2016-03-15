/*		        Solution For                       */
/*  https://www.careercup.com/question?id=5691211923849216 */

#include <iostream>
#include <queue>

using namespace std;

class node{

public :

int data;
node* left;
node* right;

node(int data, node* left, node* right){
  this->data = data;
  this->left = left;
  this->right = right;
}

};


class tree{

public :

node* insert(int x, node* tree){
  if(tree == NULL){
     tree = new node(x, NULL, NULL);
  }else if(tree->data > x){
     tree->left = insert(x, tree->left);
  }else if(tree->data < x){
     tree->right = insert(x, tree->right);
  }

  return tree; 
}

bool find(node* root, int x, int y){
   if(root == NULL){
	return false;
   }

   if(root->left == NULL && root->right == NULL){
	return true;
   }
  
   queue<node*> q;

   q.push(root);


   while(q.size() != 0){
	     
      int i=0;

      int length = q.size(); 

      bool found1 = false, found2 = false;

      while(i < length){
	   node* curr = q.front();
	   if(curr->data == x){
		found1 = true;
	   }
	   if(curr->data == y){
		found2 = true;
	   }
   	   if(curr->left != NULL){
		q.push(curr->left);
	   }

           if(curr->right != NULL){
		q.push(curr->right);
 	   }
	   q.pop();
  	   i++;
      }
	
      if(found1 && found2){
	return true;
      }	
	      
   }

   return false;
}


};

int main()
{
   node* root;
   tree t;
   root = t.insert(6, root);
   root = t.insert(3, root);
   root = t.insert(13, root);
   root = t.insert(10, root);
	
   if(t.find(root, 13, 3)){
     cout<<"x and y is in same level"<<endl;
   }else{
     cout<<"x and y is not in same level"<<endl;
   }
   
 
   return 0; 
}
