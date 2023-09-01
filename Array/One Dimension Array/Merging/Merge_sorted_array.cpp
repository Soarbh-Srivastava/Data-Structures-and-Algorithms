//Merge two sorted array and sort it in the third array
#include<iostream>
using namespace std;

int main(){
  int arr1[10],arr2[10],arr3[20];
  int n1,n2,m,index =0;
  int index_first=0,index_second=0;
  
  cout<<"Enter the number of the element in array 1 : ";
  cin>>n1;
  for(int i=0;i<n1;i++){
    cout<<"arr1["<<i<<"] : ";
    cin>>arr1[i];
  }
  cout<<"Enter the number of the element in array 2 : ";
  cin>>n2;
  for(int i=0;i<n2;i++){
    cout<<"arr2["<<i<<"] : ";
    cin>>arr2[i];
  }
  m=n1+n2;
  while(index_first&&index_second){
    if(arr1[index_first]<arr2[index_second]){
      arr3[index]=arr1[index_first];
      index_first++;
    }
    else{
      arr3[index]=arr2[index_second];
      index_second++;
    }
  }
  //if element of the first array are over and the second array has some elemment left 
  if(index_first == n1){
    while(index_second < n2){
      arr3[index]=arr2[index_second];
      index_second++;
      index;
    }
  }
  //if element of the second array are over the first array has some element
  else if(index_second == n2){
    while(index_first < n1){
      arr3[index]=arr1[index_first];
      index_first++;
      index++;
    }
  }
  cout<<"The merge array is : ";
  for(int i=0;i<m;i++){
    cout<<"arr3["<<i<<"] : "<<arr3[i]<<"\n";
  }
}