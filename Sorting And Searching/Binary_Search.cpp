#include<iostream>
using namespace std;
int small(int a[20],int n,int k){
int pos=k,sml=a[k];
for(int i=k+1;i<n;i++){
    if(a[i]<sml){
         sml=a[i];
         pos=i;
            }
}
return pos;
}
void sort(int a[20],int n){
   int temp,pos,i;
   for( i=0;i<n;i++){
         pos=small(a,n,i);
         temp=a[i];
         a[i]=a[pos];
         a[pos]=temp;
   }
}
int main(){
    int a[20],n,val,pos,f=0;
    cout<<"Enter the size of Array: ";
    cin>>n;
     cout<<"Enter the element of Array: ";
     for(int i=0;i<n;i++){
      cin>>a[i];
     }
     cout<<"Array after Sort: ";
     sort(a,n);
     for(int i=0;i<n;i++){
      cout<<a[i]<<"\t";
     }
     int s=0,e=n,mid;
     cout<<"\nEnter the element you want to search: ";
     cin>>val;
    while(s<=e){
     mid=(s+e)/2;
     if(a[mid]==val){
      pos=mid;
      f=1;
      cout<<"Element found At position: "<<pos;
      break;
     }
     else if(a[mid]>val){
         e=mid-1;
     }
     else{
       s=mid+1;
     }
    }
    if(f==0){
      cout<<"Element not found";
     }
  return 0;
}
