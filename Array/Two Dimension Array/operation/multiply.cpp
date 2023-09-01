//  Write a program to multiply two m * n matrices. 
#include<iostream>
using namespace std;
int main(){
  int row_1,row_2,col_1,col_2,row_res,col_res;
  int arr1[5][5],arr2[5][5],res[5][5];
  cout<<"Enter the number of rows in matrix 1 : ";
  cin>>row_1;
  cout<<"Enter the number of columns in matrix 1 : ";
  cin>>col_1;
  cout<<"Enter the number of rows in matrix 2 : ";
  cin>>row_2;
  cout<<"Enter the number of columns in matrix 2 : ";
  cin>>col_2;
  if(col_1 != row_2){
    cerr<<"Error ! number of n 1 and m 2 of  matrix in not equal";
  }
  else{
    row_res = row_1;
    col_res = col_2;
    cout<<"Enter the element of the matrix 1 : \n";
    for(int i=0;i<row_1;i++){
      for(int j=0;j<col_1;j++){
        cout<<"arr1["<<i<<"]"<<"["<<j<<"] : ";
        cin>>arr1[i][j];
      }
    }
    for(int i=0;i<row_1;i++){
      for(int j=0;j<col_1;j++){
        cout<<arr1[i][j]<<"  ";
      }
      cout<<"\n";
    }
    cout<<"Enter the element of the matrix 2 : \n";
    for(int i=0;i<row_2;i++){
      for(int j=0;j<col_2;j++){
        cout<<"arr1["<<i<<"]"<<"["<<j<<"] : ";
        cin>>arr2[i][j];
      }
    }
    for(int i=0;i<row_2;i++){
      for(int j=0;j<col_2;j++){
        cout<<arr2[i][j]<<"  ";
      }
      cout<<"\n";
    }
    for(int i=0;i<row_res;i++){
      for(int j=0;j<col_res;j++){
        res[i][j]=0;
        for(int z=0;z<col_res;z++){
          res[i][j] += arr1[i][z] * arr2[z][j];
        }
      }
    }
    cout<<"The new matrix made after the res of the elements are : \n";
    for(int i=0;i<row_res;i++){
      for(int j=0;j<col_res;j++){
        cout<<res[i][j]<<"  ";
      }
      cout<<"\n";
    }
  }
}