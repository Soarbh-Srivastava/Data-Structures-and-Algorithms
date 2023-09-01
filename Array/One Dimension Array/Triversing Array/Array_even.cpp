#include<iostream>
using namespace std;

int main(){
  int arr1[10];
  for(int i=0;i<10;i++){
    arr1[i]=i*2;
}
  for(int i=0;i<10;i++){
    cout<<arr1[i];
    cout<< " ";
}
}