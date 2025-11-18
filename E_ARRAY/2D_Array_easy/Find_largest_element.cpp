
//#include <climits>
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

  cout<<"here is the printed element";
  cout<<endl;

  for(int r=0;r<rs;r++){
    for(int c=0;c<cs;c++){
      cout<<arr[r][c];
      cout<<" ";
    }
    cout<<endl;

}
int largest=INT_MIN;
for(int r=0;r<rs;r++){
    for(int c=0;c<cs;c++){
      if(arr[r][c]>largest){
        largest=arr[r][c];
      }
      
    }
}

cout<<"largest number is=";
cout<<largest;

}