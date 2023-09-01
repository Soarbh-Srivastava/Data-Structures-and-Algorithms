//Accessing the second largest element in the array
#include<iostream>
using namespace std;
int main(){
  int i,n,arr[20],large,second_largest;
  cout<<"Enter the number the element in the the arrary :";
  cin>>n;
  for(i=0;i<n;i++){
    cout<<"arr["<<i<<"] : ";
    cin>>arr[i];
  }
  large = arr[0];
  for(i=1;i<n;i++){
    if(arr[i]>large){
      large=arr[i];
    }
  }
  second_largest =arr[1];
  for(i=0;i<n;i++){
    if(arr[i] != large){
      if(arr[i]>second_largest){
        second_largest =arr[i];
      }
    }
  }
  cout<<"The array is as follow : ";
  for(i=0;i<n;i++){
    cout<<arr[i];
    cout<<" ";
  }
  cout<<"\n"<<"The largest number in the array is :"<<large<<"\n"<<"The second largest number in the array is :"<<second_largest;
}