// Write a program to fill a square matrix with value zero on the diagonals, 1 on the upper right triangle, and –1 on the lower left triangle.
#include<iostream>
using namespace std;
void read_array(int arr[5][5],int);
void display(int arr[5][5],int);
int main(){
  int arr[5][5],row;
  cout<<"Enter the number of row in the array : ";
  cin>>row;
  read_array(arr,row);
  display(arr,row);
  return 0;
}
void read_array(int arr[5][5],int r){
  for(int i = 0;i<r;i++){
    for(int j=0;j<r;j++){
      if(i==j){
        arr[i][j]=0;
      }
      else if(i>j){
        arr[i][j]=-1;
      }
      else{
        arr[i][j] = 1;
      }
    }
  }
}
void display(int arr[5][5],int r){
  cout<<"The matrix is : \n";
  for(int i=0;i<r;i++){
    for(int j=0;j<r;j++){
      cout<<"\t"<<arr[i][j];
    }
    cout<<"\n";
  }
}