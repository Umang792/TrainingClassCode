//level wise solving in tree
//address store in queue
#include<iostream>
#include<queue>
#include<vector>
using namespace std;

// Node class to represent each element of the binary tree
class node {
  public:
  int data;       // stores value of node
  node* left;     // pointer to left child
  node* right;    // pointer to right child

  // Constructor: called when new node is created
  node(int value) {
    data = value;
    left = right = NULL;   // initially no children (links are empty)
  }
};


int main() {
  int x;
  int first, second;

  cout << "enter the node";
  cin >> x;   // take the value of root node from user

  queue<node*> q;           // queue to build tree level by level (BFS style)
  node* root = new node(x); // ✅ create root node (top node of tree)
  q.push(root);             // push root into queue to start processing

  // loop until all nodes are processed
  while(!q.empty()) {

    node* temp = q.front(); // get the front node from queue (current node to process)//every itration changes value of temp from queue
    q.pop();                // remove it from queue after taking (so we don't repeat it)

    // take input for left child of current node (temp)
    cin >> first;
    if(first != -1) {  // -1 means "no child"
      temp->left = new node(first); // create left child and link it
      q.push(temp->left);           // push left child into queue for future processing
    }

    // take input for right child of current node (temp)
    cin >> second;
    if(second != -1) {  // -1 means "no child"
      temp->right = new node(second); // create right child and link it
      q.push(temp->right);            // push right child into queue
    }

    // ✅ Now this iteration is done — queue ensures next temp will be next node (like root->left, root->right, etc.)
  }

  // At this point, full binary tree is constructed in memory using level-order input

}


// #include<iostream>
// #include<queue>
// #include<vector>
// using namespace std;

// class node{
//   public:
//   int data;
//   node* left;
//   node* right;

//   node(int value){
//     data=value;
//     left=right=NULL;
//   }

// };


// int main(){
//   int x;
//   int first,second;
//   cout<<"enter the node";
//   cin>>x;

//   queue<node*>q;
//   node* root=new node(x);
//   q.push(root);

//   while(!q.empty()){
//     node*temp=q.front();
//     q.pop();
//     cin>>first;
//     if(first!=-1){
//       temp->left=new node(first);
//       q.push(temp->left);
//     }
//     cin>>second;
//     if(second!=-1){
//       temp->right=new node(second);
//       q.push(temp->right);
//     }

//   }



// }