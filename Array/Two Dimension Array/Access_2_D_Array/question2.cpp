// Write a program to read a 2D array marks which stores the marks of five students in three subjects. Write a program to display the highest marks in each subject
#include<iostream>
using namespace std;

int main(){
  int student[5][3];
  cout<<"Enter the Marks of students : \n";
  for(int i=0;i<20;i++){
    cout<<"*";
  }
  cout<<"\n";
  for(int i=0;i<5;i++){
    cout<<"Enter the marks of Subject "<<i+1<<" : ";
    for(int j=0;j<3;j++){
      cin>>student[i][j];
    }
  }
  for(int i =0;i<3;i++){
    int max_marks= -999;
    for(int j=0;j<5;j++){
      if(student[i][j]>max_marks){
        max_marks = student[i][j];
      }
    }
    cout<<"The Max marks scored in subject "<<i+1<<" : "<<max_marks<<"\n";
  }
}