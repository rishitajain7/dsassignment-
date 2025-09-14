#include <iostream>
#include <stack>
using namespace std;

void dailyTemperatures(int temp[], int n) {
    int ans[n];  
    for (int i = 0; i < n; i++) {
        ans[i] = 0;
    }; 

    stack<int> s;

    for (int i = 0; i < n; i++) {
        while (!s.empty() && temp[i] > temp[s.top()]) {
            int idx = s.top();
            s.pop();
            ans[idx] = i - idx;  
        }
        s.push(i);
    }

    
    for (int i = 0; i < n; i++) {
        cout << ans[i] << " ";
    }
    cout << endl;
}

int main() {
    int temp[] = {73, 74, 75, 71, 69, 72, 76, 73};
    int n = sizeof(temp) / sizeof(temp[0]);
    dailyTemperatures(temp, n);
    return 0;
}
