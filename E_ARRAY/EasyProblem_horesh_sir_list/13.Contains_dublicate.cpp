//do again


// #include<iostream>
// using namespace std;
// int main(){
//   int arr[10]={4,34,1,56,8,67,2,0,54};


//   bool umg=false;
//   for(int i=0;i<9;i++){
//     for(int j=i+1;j<10;j++){
//       if(arr[i]==arr[j]){
//         umg=true;
//         break;
//       }
//     }
//   }
//   if(umg){
//     cout<<"dublicate";
//   }
//   else{
//     cout<<"not dublicate";
//   }
//   return 0;
// }



// #include <iostream>
// using namespace std;

// int main() {
//     int arr[9] = {4, 34, 1, 56, 8, 67,8, 2, 54};
//     bool umg = false;

//     for (int i = 0; i < 9; i++) {
//         for (int j = i + 1; j < 9; j++) {
//             if (arr[i] == arr[j]) {
//                 umg = true;
//                 break;  // breaks inner loop
//             }
//         }
//         if (umg) break;  // breaks outer loop too
//     }

//     if (umg)
//         cout << "Duplicate found";
//     else
//         cout << "No duplicate";

//     return 0;
// }



//contain dublicate

#include<iostream>
using namespace std;
int main(){
  int arr[100]={1,2,3,4,5,6,7,6,9,0};
  int hash[102]={0};
  for(int i=0;i<10;i++){
    hash[arr[i]]++;
  }

  for(int i=0;i<102;i++){
    if(hash[i]>1){
      cout<<"contains dublicate";
      break;
    }
  }
  return 0;
}