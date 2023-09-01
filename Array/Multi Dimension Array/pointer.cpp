//Write a program which illustrates the use of a pointer to a three-dimensional array.
#include <iostream>
using namespace std;
int main(){
  int arr[2][2][2];
  int (*parr)[2][2]= arr;
  cout<<"\n Enter the elements of a 2*2*2 array: \n";
  for(int i = 0; i < 2; i++){
    for(int j = 0; j < 2; j++){
      for(int k = 0; k < 2; k++){
      cout<<"arr["<<i<<"]"<<"["<<j<<"]"<<"["<<k<<"] : ";
      cin>>arr[i][j][k];
      }
    }
  }
  cout<<"\n The elements of the 2*2*2 array are: \n";
  for(int i = 0; i < 2; i++){
    for(int j = 0; j < 2; j++){
      for(int k = 0; k < 2; k++){
      cout<<"arr["<<i<<"]"<<"["<<j<<"]"<<"["<<k<<"] : ";
      cout<<*(*(*(parr+i)+j)+k)<<"\n";
      }
    }
  }
  return 0;
}