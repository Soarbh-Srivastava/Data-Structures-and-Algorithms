//  Write a program to read and display a 3*3 matrix.
#include<iostream>
using namespace std;
int main(){
  int arr[3][3];
  for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
      cout<<"arr["<<i<<"]"<<"["<<j<<"] : ";
      cin>>arr[i][j];
    }
  }
  for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
      cout<<arr[i][j]<<"  ";
    }
    cout<<"\n";
  }
}