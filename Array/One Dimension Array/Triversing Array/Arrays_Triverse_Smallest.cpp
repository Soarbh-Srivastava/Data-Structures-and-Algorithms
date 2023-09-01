//Write a program to print the postion of smallest number of n number using array
#include<iostream>
using namespace std;
int main(){
  int n,arr[20],small,pos;
  cout<<"Enter the number of the element in the array : ";
  cin>>n;
  cout<<"Enter the element in the array :"<<"\n";
  for(int i=0;i<n;i++){
    cout<<"arr["<<i<<"] : ";
    cin>>arr[i];
  }
  small = arr[0];
  pos = 0;
  for(int i=1;i<n;i++){
    if(arr[i]<small){
      small=arr[i];
      pos=i;
    }1`
  }
  cout<<"The smallest number is : "<<small<<"\n";
  cout<<"The position of smallest element in the array is : "<<pos;
  return 0;
}