//all number appear twice accept one 
//ex=2,3,4,5,2,3,8,7,4,5,7



// //two pointer//solve again
// #include <iostream>
// #include <algorithm>
// using namespace std;

// int main() {
//     int arr[] = {2, 3, 5, 4, 5, 3, 4};
//     int n = sizeof(arr) / sizeof(arr[0]);

//     sort(arr, arr + n);  // Required for two-pointer method

//     int i = 0;
//     while (i < n - 1) {
//         if (arr[i] == arr[i + 1]) {
//             // pair found, skip both
//             i += 2;
//         } else {
//             // single number found
//             cout << "Single number: " << arr[i];
//             return 0;
//         }
//     }

//     // if loop ends, last element is the single one
//     cout << "Single number: " << arr[n - 1];
//     return 0;
// }




//using hash array

#include<iostream>
using namespace std;
int main(){
  int arr[11]={2,3,4,5,2,3,8,7,4,5,7};
  int hash[20]={0};
  for(int i=0;i<11;i++){
    hash[arr[i]]++;
  }

  bool umg=false;
  int k=-1;

  for(int i=0;i<20;i++){
    if(hash[i]==1){
       k=i;
      umg=true;
      break;
    }
  }
  if(umg){
    cout<<"single number present";
    cout<<k;
  }
  else{
    cout<<"not a single number";
  }
}


//using xor operator //do itself
#include <iostream>
using namespace std;

int main() {
    int arr[11] = {2, 3, 4, 5, 2, 3, 8, 7, 4, 5, 7};
    int single = 0;

    for (int i = 0; i < 11; i++) {
        single = single ^ arr[i]; // XOR all elements
    }

    cout << "Single number is: " << single;
    return 0;
}
