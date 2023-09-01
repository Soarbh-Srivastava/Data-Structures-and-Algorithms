// In a small company there are five salesmen. Each salesman is supposed to sell three products. Write a program using a 2D array to print (i) the total sales by each salesman and (ii) total sales of each item

#include<iostream>
using namespace std;
int main(){
  int sales[5][3],total_sales = 0;
  cout<<"Enter the Data : \n \n";
  for(int i=0;i<10;i++){
    cout<<"*";
  }
  cout<<"\n";
  for(int i = 0;i<5; i++){
    cout<<"Enter the sales of 3 item sold by salesman "<<i+1<<" : ";
    for(int j=0;j<3;j++){
      cin>>sales[i][j];
    }
  }
  // PRINT TOTAL SALES BY EACH SALESMAN
  for(int i=0;i<5;i++){
    total_sales=0;
    for(int j=0;j<3;j++){
      total_sales += sales[i][j];
    }
  cout<<"Total sales of salesman "<<i+1<<" : "<<total_sales<<"\n";
  }
  // TOTAL SALES OF EACH ITEM
  for(int i=0;i<3;i++){
    total_sales = 0;
    for(int j=0;j<5;j++){
      total_sales += sales[j][i];
    }
    cout<<"Total sales of "<<i+1<<" : "<<total_sales<<"\n";
  }
}