#include <iostream>
#include <queue>
using namespace std;

void interleaveQueue(queue<int>& q) {
    int n = q.size();
    int half = n / 2;

    queue<int> firstHalf;
    for (int i = 0; i < half; i++) {
        firstHalf.push(q.front()); 
        q.pop();
    }

    while (!firstHalf.empty()) {
        q.push(firstHalf.front()); 
        firstHalf.pop();
        q.push(q.front()); 
        q.pop();
    }
}

int main() {
    queue<int> q;
    int arr[] = {4, 7, 11, 20, 5, 9};
    int arr[] = {4, 7, 11};
    queue<int> q;
    for (int x : arr) {
        q.push(x);
    }

    interleaveQueue(q);

    while (!q.empty()) { cout << q.front() << " "; q.pop(); }
}
