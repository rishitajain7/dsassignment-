#include <iostream>
#include <stack>
using namespace std;

void nearestSmallerToLeft(int arr[], int n) {
    stack<int> s;
    int result[n]; 

    for (int i = 0; i < n; i++) {
        while (!s.empty() && s.top() >= arr[i]) {
            s.pop();
        }

        if (s.empty()) {
            result[i] = -1;
        } else {
            result[i] = s.top();
        }

        s.push(arr[i]);
    }

    cout << "Nearest Smaller to Left: ";
    for (int i = 0; i < n; i++) {
        cout << result[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = {4, 5, 2, 10, 8};
    int n = sizeof(arr) / sizeof(arr[0]);

    nearestSmallerToLeft(arr, n);

    return 0;
}
