//Write a program to read and display a 3 ¥ 3 matrix
#include<iostream>
using namespace std;
void display(int (*)[3]);
int main(){
  int i, j, mat[3][3];
  cout<<"\n Enter the elements of the matrix : ";
  for(i=0;i<3;i++){
    cout<<"\n";
    for(j = 0; j < 3; j++){
      cout<<"arr["<<i<<"]"<<"["<<j<<"] : ";
      cin>>mat[i][j];
    }
  }
  display(mat);
  return 0;
}
void display(int (*mat)[3]){
  int i, j;
  cout<<"\n The elements of the matrix are";
  for(i = 0; i < 3; i++){
    cout<<("\n");
    for(j=0;j<3;j++){
    cout<<"\t "<<*(*(mat + i)+j);
    }
  }
}