//write a program to search an element in an array using linear search
#include<iostream>
using namespace std;
int main(){
  int arr[5]={};
  for(int i=0;i<5;i++){
    cout<<"arr["<<i<<"] : ";
    cin>>arr[i];
  }
  int search;
  cout<<"Enter the element to be searched : ";
  cin>>search;
  for(int i=0;i<5;i++){
    if(arr[i]==search){
      cout<<"Element found at index "<<i;
      break;
    }
    else if(i==4){
      cout<<"Element not found";
    }
  }
}
