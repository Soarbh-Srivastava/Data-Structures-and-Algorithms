// Write a program to transpose a 3*3 matrix
#include<iostream>
using namespace std;
int main(){
  int matrix[3][3], transpose_matrix[3][3];
  cout<<"Enter the Elements in the array";
  for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
      cout<<"arr["<<i<<"]"<<"["<<j<<"] : ";
      cin>>matrix[i][j];
    }
  }
  for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
      cout<<matrix[i][j]<<"  ";
    }
    cout<<"\n";
  }
  for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
      transpose_matrix[i][j]=matrix[j][i];
    }
  }
  cout<<"The Transposed of the the Matrix is : \n";
  for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
      cout<<transpose_matrix[i][j]<<"  ";
    }
    cout<<"\n";
  }
}