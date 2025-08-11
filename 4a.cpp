#include <iostream>
using namespace std;

void reverseArray(int arr[], int n) {
    int start = 0, end = n - 1;
    while (start < end) {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }}

int main() {
    int arr[50];
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter " << n << " elements: "<<endl;
    for (int i = 0; i < n; i++){
        cin >> arr[i];}

    reverseArray(arr, n);
    cout << "Reversed array: "<<endl;
    for (int i = 0; i < n; i++){
        cout << arr[i] << " ";}
    return 0;}
