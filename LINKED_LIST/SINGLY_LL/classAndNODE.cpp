#include<iostream>
using namespace std;

class Node{
  public:
  int data;
  Node * next;

  //constructor
Node(int value){
  this->data=value;
  this->next=NULL;
}

};

int main(){

Node* node1=new Node(5);//it is object to create a node of node class
cout<<node1->data;
cout<<endl;
cout<<node1->next;
cout<<endl;

Node* node2=new Node(6);//it is object of class node to create node
cout<<node2->data;
cout<<endl;
cout<<node2->next;
cout<<endl;

//link fist node to second by putting address of 2nd node in first
node1->next=node2;
cout<<node1->next;

}