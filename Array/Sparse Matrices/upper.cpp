// upper sparse triangle matrixes
#include<iostream>
using namespace std;
int main(){
  int arr[5][5]={};
  for(int i=0;i<5;i++){
    for(int j=0;j<5;j++){
      if(i<j){
        break;
      }
      else{
        cout<<"arr["<<i<<"]["<<j<<"] : ";
        cin>>arr[i][j];
      }
    }
  }
  for(int i=0;i<5;i++){
    for(int j=0;j<5;j++){
      if(i>=j){
        cout<<arr[i][j]<<" ";
      }
    }
    cout<<"\n";
  }
}