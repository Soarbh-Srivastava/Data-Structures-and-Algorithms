//Write a program to merge two unsorted arrays
#include<iostream>
using namespace std;

int main(){
  int arr1[10],arr2[10],arr3[30];
  int n1,n2,m,index=0;
  cout<<"Enter the number of the element in the array1 : ";
  cin>>n1;
  for(int i=0;i<n1;i++){
    cout<<"arr1["<<i<<"] : ";
    cin>>arr1[i];
  }
  cout<<"Enter the number of the element in the array1 : ";
  cin>>n2;
  for(int i=0;i<n2;i++){
    cout<<"arr1["<<i<<"] : ";
    cin>>arr2[i];
  }
  m=n1+n2;
  for(int i=0;i<n1;i++){
    arr3[index]=arr1[i];
    index++;
  }
  for(int i=0;i<n2;i++){
    arr3[index]=arr2[i];
    index++;
  }
  cout<<"The merged array is :"<<"\n";
  for(int i=0;i<m;i++){
    cout<<"arr["<<i<<"] : "<<arr3[i]<<"\n";
  }
  cout<<"Length of new array is : "<<m;
  return 0;
}