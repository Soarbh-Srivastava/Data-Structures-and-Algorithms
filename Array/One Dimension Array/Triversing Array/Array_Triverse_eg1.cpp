//Write a program to find the mean of n using arrays
#include<iostream>
using namespace std;
int main(){
  int n,arr[20],sum=0;
  float mean = 0.0;
  cout<<"Enter the number of elements in the array : ";
  cin>>n;
  for(int i=0;i<n;i++){
    cout<<"arr["<<i<<"] : ";
    cin>>arr[i];
  }
  for(int i=0;i<n;i++){
    sum += arr[i];
  }
  mean = sum/n;
  cout<<"The sum of the array element = "<<sum<<"\n";
  cout<<"The mean of the array element = "<<mean;
  return 0;
}