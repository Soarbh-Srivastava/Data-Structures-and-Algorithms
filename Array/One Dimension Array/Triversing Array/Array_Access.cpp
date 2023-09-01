//Accessing the Element of array

//Note: There is no single statement that can read, access, or print all the element of the an array. To do this, we have to use a loop to execute the same statement with different index value. 
#include<iostream>
using namespace std;
int main(){
  int i, marks[10];

  for(i=0;i<10;i++){
    marks[i]=-1;
    cout<<marks[i];
    cout<<" ";
  }

}