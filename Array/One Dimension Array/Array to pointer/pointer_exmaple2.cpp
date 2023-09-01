#include<iostream>
using namespace std;
int main(){
  int *ptr[10];
  int p = 1, q = 2, r = 3, s = 4, t = 5;
  ptr[0] = &p;
  ptr[1] = &q;
  ptr[2] = &r;
  ptr[3] = &s;
  ptr[4] = &t;
  for(int i =0;i<5;i++){
    cout<<*ptr[i];
    cout<<" ";
  }
}