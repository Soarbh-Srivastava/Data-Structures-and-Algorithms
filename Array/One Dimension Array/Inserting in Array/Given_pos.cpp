//Inserting at given position in array
#include<iostream>
using namespace std;
int main(){
  int i,n,num,pos,arr[10];
  cout<<"Enter the number of element in the array : ";
  cin>>n;
  for(int i=0;i<n;i++){
    cout<<"arr["<<i<<"] : ";
    cin>>arr[i];
  }
  cout<<"Enter the number that have to be  inserted in the array : ";
  cin>>num;
  cout<<"Enter the postion at which u want to inserted the array : ";
  cin>>pos;
  for(int i=n-1;i>=pos;i--){
    arr[i+1]=arr[i];
  }
  arr[pos]= num;
  n=n+1;
  cout<<"The array after insertion of "<<num<<" : \n";
  for(int i=0;i<n+1;i++){
    cout<<"arr["<<i<<"] : ";
    cout<<arr[i]<<"\n";
  }
  return 0;
}