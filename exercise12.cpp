#include<iostream>
using namespace std;
int main(){
  int a;
  cout<<"Enter The Year :- ";
  cin>>a;
  // if(a%400==0){
  //   cout<<"Leap Year";
  // }
  // else if (a%100!=0)
  // {
  //   if(a%4==0){
  //     cout<<"Leap Year";
  //   }
  //   else{
  //     cout<<" Not Leap Year";
  //   }
  // }
  // else{
  //     cout<<"Not Leap Year";
  //   }
  if(a%400==0 || a%100!=0 && a%4==0){
    cout<<"Leap Year";
  }
  else{
    cout<<" Not Leap Year";
  }
  
    return 0;
}