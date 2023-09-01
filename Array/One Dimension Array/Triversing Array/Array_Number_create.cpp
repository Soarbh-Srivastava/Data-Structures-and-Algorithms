//create a number the user input element in the array 
#include<iostream>
#include<math.h>
using namespace std;

int main(){
  int number=0,digit[10], numofdigit;
  cout<<"Enter the number of digit in the : ";
  cin>>numofdigit;
  for(int i=0;i<numofdigit;i++){
    cout<<"Enter the digit on "<<i+1<<" postion :";
    cin>>digit[i];
  }
  int i=0;
  while(i<numofdigit){
    number=number+digit[i]*pow(10,i);
    i++;
  }
  cout<<"The number is : "<<number;
  return 0;
}