#include<iostream>
#include<vector>
using namespace std;


bool issubset(vector<int>&v,int index,int target){
  if(target==0){
    return true;
  }
  if(index==v.size()){
    return false;
  }
  if(v[index]>target){
  return issubset(v,index+1,target);
}
return issubset(v,index+1,target)||issubset(v,index+1,target-v[index]);

}

int main(){
  vector<int>v;
  v.push_back(4);
  v.push_back(5);
  v.push_back(6);
  v.push_back(9);

  bool umg=issubset(v,0,9);
  if(umg)
    cout<<"found";
  else
    cout<<"notfound";  
  
}

















// #include<iostream>
// using namespace std;


// bool issubset(int arr[],int n,int sum){

//   if(n==0)
//   return arr[0]==sum;
 
// bool y=  issubset(arr,n-1,sum);
// bool x=false;
// if(arr[n]<=sum)
//   x=issubset(arr,n-1,sum-arr[n]);

//  return x||y;
// }

// int main(){
//   int arr[]={3,2,7,6,8,6};
//   int size=sizeof(arr)/sizeof(arr[0]);
//   int sum=78;
//   if(issubset(arr,size,sum)){
//     cout<<"yes";}
//   else
//   {cout<<"false";
//   }

  
// }





























// #include<iostream>
// using namespace std;
// #include<vector>



// bool solve(vector<int>& arr,int target,int ind){
//   // base case
//   if(ind==0){ //2 2
//      return arr[0]==target;
     
//   }

//   bool exclude=solve(arr,target,ind-1);
//   bool include=false;
//   if(arr[ind]<=target){ 
//     include=solve(arr,target-arr[ind],ind-1);
//   }
//   return include||exclude;
// }


// int main(){
//   vector<int> arr;
//   arr.push_back(1);
//   arr.push_back(2);
//   arr.push_back(3);
//   arr.push_back(4);
//   arr.push_back(5);
//   arr.push_back(8);
  
//   int target=42;
// cout<<solve(arr,target,arr.size()-1);

// }