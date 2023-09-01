// insert the number in a already Sort the element in the array in ascending order
#include<iostream>
using namespace std;

int main(){
  int n,num,arr[10];
  cout<<"Enter the number of element should be there in the array : ";
  cin>>n;
  cout<<"Enter the element in the array : \n";
  for(int i=0;i<n;i++){
    cout<<"arr["<<i<<"] : ";
    cin>>arr[i];
  }
  cout<<"Enter the element to be inserted in the array :";
  cin>>num;
  for(int i=0;i<n;i++){
    if(arr[i]>num){
      for(int j=n-1;j>=1;j--){
        arr[j+1]=arr[j];
      }
      arr[i]=num;
      break;
    }
  }
  n=n+1;
  cout<<"\n The array after insertion of "<<num<<"\n";
  for(int i=0;i<n;i++){
    cout<<"arr["<<i<<"] : "<<arr[i]<<"\n";
  }
}