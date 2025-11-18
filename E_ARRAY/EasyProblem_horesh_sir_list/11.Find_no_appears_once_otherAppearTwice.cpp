//find no appear once other appear twice

#include<iostream>
using namespace std;
int main(){
  int arr[100]={1,3,6,3,7,8,4,6,8,1,4};
  int hasharr[102]={0};
  for(int i=0;i<11;i++){
    hasharr[arr[i]]++;     //Every time that number is found in your array, its count increases by 1.
  }
  for(int i=1;i<102;i++){
    if(hasharr[i]==1){
      cout<<i;
      break;
    }
  }
  return 0;
  
}



//bit manupulation approach

// #include <iostream>
// using namespace std;

// int main() {
//     int arr[11] = {1, 3, 6, 3, 7, 8, 4, 6, 8, 1, 4};
//     int result = 0;

//     for (int i = 0; i < 11; i++) {
//         result ^= arr[i];  // XOR cancels duplicates
//     }

//     cout << "Number appearing once: " << result;
//     return 0;
// }


// So what’s happening conceptually?

// Think of result like a running XOR sum.

// Each new number toggles certain bits in result.

// When its duplicate comes again, those bits are toggled back — effectively cancelling the first one’s contribution.

// So at the end, only bits from the unpaired number (which never got toggled back) remain set.