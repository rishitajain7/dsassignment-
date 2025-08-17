#include <iostream>
using namespace std;

int missingnumber(int arr[], int n) {
    int low = 0, high = n - 2; 
    while (low <= high) {
        int mid = (low + high) / 2;
        if (arr[mid] == mid + 1) {
            low = mid + 1;
        } else {
            high = mid - 1; 
        }}
    return low + 1; 
}

int main() {
    int arr[] = {1, 2, 3, 5, 6}; 
    int n = 6; 

    cout<< "Missing number is as follows : " << missingnumber(arr, n) << endl;
    return 0;
}
