// Write a program to input two m ¥ n matrices and then calculate the sum of their corresponding elements and store it in a third m ¥ n matrix.
#include<iostream>
using namespace std;
int main(){
  int row_1,row_2,col_1,col_2,row_sum,col_sum;
  int arr1[5][5],arr2[5][5],sum[5][5];
  cout<<"Enter the number of rows in matrix 1 : ";
  cin>>row_1;
  cout<<"Enter the number of columns in matrix 1 : ";
  cin>>col_1;
  cout<<"Enter the number of rows in matrix 2 : ";
  cin>>row_2;
  cout<<"Enter the number of columns in matrix 2 : ";
  cin>>col_2;
  if(row_1 != row_2 || col_1 != col_2){
    cerr<<"Error ! number of row or columns of each matrix in not equal";
  }
  else{
    row_sum = row_1;
    col_sum = col_1;
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
    for(int i=0;i<row_sum;i++){
      for(int j=0;j<col_sum;j++){
        sum[i][j]=arr1[i][j] + arr2[i][j];
      }
    }
    cout<<"The new matrix made after the sum of the elements are : \n";
    for(int i=0;i<row_sum;i++){
      for(int j=0;j<col_sum;j++){
        cout<<sum[i][j]<<"  ";
      }
      cout<<"\n";
    }
  }
}