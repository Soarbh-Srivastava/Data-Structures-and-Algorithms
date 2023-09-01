#include <iostream>
using namespace std;

int main() {
  int i, n, arr[20];
  cout << "\n Enter the number of elements: ";
  cin >> n;
  for (i = 0; i < n; i++) {
    cout << "\n arr[" << i << "] = ";
    cin >> arr[i];
  }
  cout << "\n The array elements are:";
  for (i = 0; i < n; i++) {
    cout << " " << arr[i];
  }
  return 0;
}