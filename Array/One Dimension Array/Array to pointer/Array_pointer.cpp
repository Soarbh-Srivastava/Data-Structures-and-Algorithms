#include<iostream>
using namespace std;
int main(){
  int arr[]={0,1,2,3,4,5,6,7,8,9};
  int *prt1, *ptr2;
  ptr1 = arr;
  ptr2 = arr[8];
  while(ptr1<=ptr2){
    cout<<*ptr1;
    ptr1++;
    }
    return 0;
}