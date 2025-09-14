#include <iostream>
#include <queue>
using namespace std;


int minIndex(queue<int> &q, int sortedIndex) {
    int min_index = -1;
    int min_value;
    int n = q.size();
    bool first = true;

    for (int i = 0; i < n; i++) {
        int curr = q.front();
        q.pop();

        if (i <= sortedIndex) {
            if (first) {
                min_value = curr;
                min_index = i;
                first = false;
            } else if (curr < min_value) {
                min_value = curr;
                min_index = i;
            }
        }

        q.push(curr);
    }
    return min_index;
}


void insertMinToRear(queue<int> &q, int min_index) {
    int min_value;
    int n = q.size();

    for (int i = 0; i < n; i++) {
        int curr = q.front();
        q.pop();

        if (i != min_index)
            q.push(curr);
        else
            min_value = curr;
    }
    q.push(min_value);
}


void sortQueue(queue<int> &q) {
    int n = q.size();
    for (int i = n - 1; i >= 0; i--) {
        int min_idx = minIndex(q, i);
        insertMinToRear(q, min_idx);
    }
}

int main() {
    queue<int> q;
    q.push(11);
    q.push(5);
    q.push(4);
    q.push(21);

    sortQueue(q);

    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;

    return 0;
}
