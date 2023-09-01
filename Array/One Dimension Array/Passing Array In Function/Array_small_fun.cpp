//write a program to read an array if n number and then find the smallest number.
#include<iostream>
using namespace std;
void read_array(int arr[],int n);
int find_small(int arr[],int n);
int main(){
  int num[10],n,smallest;
  cout<<"Enter the siz of the array : ";
  cin>>n;
  read_array(num,n);
  smallest= find_small(num,n);
  cout<<"The smallest element in the array is  : "<<smallest;
  return 0;
}
void read_array(int arr[],int n){
  int i;
  for(int i=0;i<n;i++){
    cout<<"arr["<<i<<"] : ";
    cin>>arr[i];
  }
}
int find_small(int arr[],int n){
  int i=0,small = arr[0];
  for(int i=0;i<n;i++){
    if(arr[i]<small){
      small = arr[i];
    }
  }
  return small;
}