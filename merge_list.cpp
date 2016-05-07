/*    https://www.careercup.com/question?id=5702478461927424	*/

#include <iostream>

using namespace std;

struct node{

int data;
node* next;

};

/* Insert to last element */
node* insert(int x, node* list){
   if(list == NULL){
      node* new_list = new node;
      new_list->data = x;
      new_list->next = NULL;
      list = new_list;
   }else{
      list->next = insert(x, list->next);	
   }
   
   return list;
}

/* Insert to list with order elements */
node* insert_order(int x, node* list){
  
   if(list->data > x){
      node* n = new node;
      n->data = x;
      n->next = NULL;
 
      n->next = list;
      list = n;
   }else{  
 
      node* temp;
      node* l = list;
      while(l && l->data < x){
         temp = l;
         l = l->next;
      }
   
      if(l == NULL){
         node* n = new node;
         n->data = x;
         n->next = NULL;
         temp->next = n;
      }else{
         node* n = new node;
         n->data = x;
         n->next = NULL;
         
	 temp->next = n;
         n->next = l;
      }

  }

  return list;
   
}

/* Merge Two List */
node* MergeList(node* list1, node* list2){
   
   node* merge = NULL;
   node* temp1;
   node* temp2;

   temp1 = list1;
   while(temp1){
      merge = insert(temp1->data, merge);
      temp1 = temp1->next;
   }
  
   temp2 = list2;
   while(temp2){
      merge = insert_order(temp2->data, merge);
      temp2 = temp2->next;
   }
   return merge;
}


/* Print The List */
void PrintList(node* list){
   node* l = list; 
   while(l){
	cout<<l->data<<endl;
	l = l->next;
   }
}


int main(){

   node* list1 = NULL;
   node* list2 = NULL;

   list1 = insert(1, list1);
   list1 = insert(3, list1);
   
   list2 = insert(2, list2);
   list2 = insert(4, list2);

   node* merge = MergeList(list1, list2);
   PrintList(merge);

  return 0;
}
