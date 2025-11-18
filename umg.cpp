#include<iostream>
#include<queue>
using namespace std;

class node{
  public:
  int root;
  node*left;
  node*right;

  node(int value){
    root=value;
    left=right=NULL;
  }
};

int main(){
int x,first,second;
cin>>x;
queue<node*>q;
node*root=new node(x);
q.push(root);

while(!q.empty()){
  node*temp=q.front();
  q.pop();

 cin>>first;
  if(first!=-1){
    temp->left=new node(first);
    q.push(temp->left);

  }

  cin>>second;
  if(second!=-1){
    temp->right=new node(second);
    q.push(temp->right);
  }

}
return 0;

}
