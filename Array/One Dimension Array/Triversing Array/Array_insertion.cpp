// There are three ways to enter the the data in array
// 1) entering array while declaring it
// 2) Giving input while from keybord
// 3) assing the value to every element seprately
#include<iostream>
using namespace std;

int main(){
  int ar[5]={4,5,5,7};
  for(int i=0;i<10;i++){
    cout<<ar[i];
    cout<<" ";
  }
  //this keybord input
  int marks[10];
  for(int i=0;i<10;i++){
    cout<<"Enter the element : ";
    cin>>marks[i];
  }
    for(int i=0;i<10;i++){
    cout<<marks[i];
    cout<<" ";
  }
}