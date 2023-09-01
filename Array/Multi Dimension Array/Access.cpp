// Write a program to read and display a 2*2*2 array.
#include<iostream>
using namespace std;
int main(){
  int arr[2][2][2];
  cout<<"Enter the element of the 3-D Array : \n";
  for(int i=0;i<2;i++){
    for(int j=0;j<2;j++){
      for(int k=0;k<2;k++){
        cout<<"arr["<<i<<"]"<<"["<<j<<"]"<<"["<<k<<"] : ";
        cin>>arr[i][j][k];
      }
    }
    cout<<"\n";
  }
  cout<<"This output : ";
  for(int i=0;i<2;i++){
  cout<<"\n";
  cout<<"\n";
    for(int j=0;j<2;j++){
      for(int k=0;k<2;k++){
        cout<<"arr["<<i<<"]"<<"["<<j<<"]"<<"["<<k<<"] : ";
        cout<<arr[i][j][k]<<"\n";
      }
    }
  }
}