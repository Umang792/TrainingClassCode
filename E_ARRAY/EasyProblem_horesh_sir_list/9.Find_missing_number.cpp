
// #include<iostream>
// using namespace std;
// int main(){

//   int arr[100];
//   int n;
//   cout<<"enter the size of an array";
//   cin>>n;
//   cout<<"enter the array element";
//   for(int i=0;i<n;i++){
//     cin>>arr[i];

//   }

//   for(int i=0;i<n-1;i++){
//     if((arr[i]+1)!=arr[i+1]){
      
//       cout<<(arr[i]+1);
//       return 0;
//     }
//   }

//   cout<<"no missing no";
//   return 0;
// }


 //using hashing
#include<iostream>
using namespace std;
int main(){
  int arr[100];
  int n;
  cin>>n;
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }

  int hasharray[102]={0};

  for(int i=0;i<n;i++){
    hasharray[arr[i]]=1;
  }

  for(int i=1;i<=n+1;i++){//we check only n+1 not all 102 space
    if (hasharray[i] == 0) {
        cout << i; // missing number
    }
  }
}

