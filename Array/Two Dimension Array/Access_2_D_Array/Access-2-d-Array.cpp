// Write a program to print the elements of a 2D array
#include<iostream>
using namespace std;

int main(){
    int arr[2][2] = {12, 34, 56 ,32};
    for(int i=0;i<2;i++){
        cout<<"\n";
        for(int j=0;j<2;j++){
            cout<<"\t"<<arr[i][j];
        }
    }
    return 0;
}