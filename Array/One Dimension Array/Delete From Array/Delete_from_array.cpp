//Delete the element using index of array
#include<iostream>
using namespace std;
int main(){
  int n,pos,arr[10];
  cout<<"Enter the number element there should be in the array : ";
  cin>>n;
  for(int i=0;i<n;i++){
    cout<<"arr["<<i<<"] : ";
    cin>>arr[i];
  }
  cout<<"Enter at what postion you want to delete the number from : ";
  cin>>pos;
  for(int i=pos;i<n-1;i++){
    arr[i]=arr[i+1];
    }
    n--;
    cout<<"The after deletion is : \n";
    for(int i=0;i<n;i++){
      cout<<"arr["<<i<<"] : "<<arr[i]<<"\n";
    }
}