#include <iostream>
using namespace std;

int diffnum(int arr[], int n) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        int dup = false;
        for (int j = 0; j < i; j++) {
            if (arr[i] == arr[j]) {
                dup = true;
                break;
            }}
        if (!dup) {
            count++;
        } }
    return count;
}

int main() {
    int arr[] = {4, 5, 4, 2, 5, 3, 3};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Total number of differemt elements: " << diffnum(arr, n) << endl;
    return 0;
}
