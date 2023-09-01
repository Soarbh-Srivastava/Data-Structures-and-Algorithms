//delete the a number from an array that is already sorted in ascending order
#include<iostream>
using namespace std;

int main(){
  int i,n,num,arr[10];
  cout<<"Enter the element in the array : ";
  cin>>n;
  for(int i=0;i<n;i++){
    cout<<"arr["<<i<<"] : ";
    cin>>arr[i];
  }
  cout<<"Enter the number that u want to delete from the array : ";
  cin>>num;
  for(int i=0;i<n;i++){
    if(arr[i] ==  num){
      for(int j=i;j<n-1;j++){
        arr[j]=arr[j+1];
      }
    }
  }
  n=n-1;
  cout<<"\n Array after the delete is : \n";
  for(int i=0;i<n;i++){
    cout<<"arr["<<i<<"] : "<<arr[i]<<"\n";
  }
}