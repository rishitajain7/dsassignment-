#include <iostream>
#include <stack>
using namespace std;

void nextGreaterElement(int arr[], int n) {
    int nge[n];  
    for (int i = 0; i < n; i++) {
        nge[i] = -1;  
    }

    stack<int> s;  

    for (int i = 0; i < n; i++) {
       
        while (!s.empty() && arr[i] > arr[s.top()]) {
            nge[s.top()] = arr[i]; 
            s.pop();
        }
        s.push(i); 
    }
 // Print result
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " --> " << nge[i] << endl;
    }
}

int main() {
    int arr[] = {4, 5, 2, 25};
    int n = sizeof(arr)/sizeof(arr[0]);

    nextGreaterElement(arr, n);
    return 0;
}
