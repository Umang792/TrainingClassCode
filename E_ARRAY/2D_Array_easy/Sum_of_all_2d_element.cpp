#include<iostream>
using namespace std;
int main(){
  int arr[10][10];
  cout<<"enter the row size";
  int rs;
  cin>>rs;
  cout<<"enter the column size";
  int cs;
  cin>>cs;
  for(int r=0;r<rs;r++){
    for(int c=0;c<cs;c++){
      cin>>arr[r][c];
    }
  }


  for(int r=0;r<rs;r++){
    for(int c=0;c<cs;c++){
      cout<<arr[r][c];
      cout<<" ";
    }
    cout<<endl;

}
  cout<<"here is the sum";
  cout<<endl;
  int sum=0;

  for(int r=0;r<rs;r++){
    for(int c=0;c<cs;c++){
      sum=sum+arr[r][c];
      
    }
}
cout<<sum;
}