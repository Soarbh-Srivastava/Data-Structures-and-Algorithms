//Interchange the position of largest and smallest number in the array.
#include<iostream>

using namespace std;

void read_array(int my_array[], int);
void display_array(int my_array[], int);
void interchange(int arr[], int);
int find_biggest_pos(int my_array[], int n);
int find_smallest_pos(int my_array[], int n);
int main() {
  int arr[10], n;
  cout << "Enter the number of elements in array: ";
  cin >> n;
  read_array(arr, n);
  interchange(arr, n);
  cout << "The array after interchanging the largest and smallest elements is: \n";
  display_array(arr, n);
  return 0;
}
void read_array(int my_array[], int n) {
  for (int i = 0; i < n; i++) {
    cout << "arr[" << i << "] : ";
    cin >> my_array[i];
  }
}
void display_array(int my_array[], int n) {
  for (int i = 0; i < n; i++) {
    cout << "arr[" << i << "] : " << my_array[i] << "\n";
  }
}
void interchange(int arr[], int n) {
  int temp, biggest_pos, smallest_pos;
  biggest_pos = find_biggest_pos(arr, n);
  smallest_pos = find_smallest_pos(arr, n);
  temp = arr[biggest_pos];
  arr[biggest_pos] = arr[smallest_pos];
  arr[smallest_pos] = temp;

}
int find_biggest_pos(int my_array[], int n) {
  int largest = my_array[0], pos = 0;
  for (int i = 0; i < n; i++) {
    if (my_array[i] > largest) {
      largest = my_array[i];
      pos = i;
    }
  }
  return pos;
}
int find_smallest_pos(int my_array[], int n) {
  int smallest = my_array[0], pos = 0;
  for (int i = 0; i < n; i++) {
    if (my_array[i] < smallest) {
      smallest = my_array[i];
      pos = i;
    }
  }
  return pos;
}