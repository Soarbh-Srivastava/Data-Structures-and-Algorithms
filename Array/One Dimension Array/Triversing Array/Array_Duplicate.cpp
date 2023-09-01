#include<iostream>
using namespace std;
int main(){
  int arr[10],i,j,flag=0,n;
  cout<<"Enter the number of element in the array : ";
  cin>>n;
  for(int i=0;i<n;i++){
    cout<<"arr["<<i<<"] : ";
    cin>>arr[i];
  }
  for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
      if(arr[i]==arr[j] && i!=j){
      flag =1;
      cout<<"The dupilate data found at index arr["<<i<<"] and arr["<<j<<"]";
    }
  }
  }

  if (flag = 0){
    cout<<"No duplicate Found";
  }
  return 0;
}