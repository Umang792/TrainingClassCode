#include<iostream>
using namespace std;

void subset(string str,string blankstr,int index){

  
  if (str.size()==index)
  {
    cout<<blankstr;
    cout<<endl;
    return;
  }
  subset(str,blankstr,index+1);
  
  subset(str,blankstr+str[index],index+1);


}

int main(){
  string str="abc";
  subset(str,"",0);
  return 0;
}



















// #include<iostream>
// using namespace std;


//  void subset(string str,string newstr,int index){
//   if(str.length()==index){
//     cout<<endl;
//     cout<<newstr;
//     return ;
//   }
//   subset(str,newstr,index+1);
//   subset(str,newstr+str[index],index+1);


// }
// int main(){

//   string str="abc";
  
//   subset(str,"",0);
//   return 0;
  
   
// }