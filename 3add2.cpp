#include <iostream>
#include <stack>
using namespace std;

class SpecialStack {
    stack<int> s;
    int minElement;

public:
    void push(int x) {
        if (s.empty()) {
            s.push(x);
            minElement = x;
        } else if (x >= minElement) {
            s.push(x);
        } else {
          
            s.push(2 * x - minElement);
            minElement = x;
        }
    }

    void pop() {
        if (s.empty()) {
            cout << "Stack is empty\n";
            return;
        }
        int top = s.top();
        s.pop();

        if (top < minElement) {
           
            minElement = 2 * minElement - top;
        }
    }

    int top() {
        if (s.empty()) {
            cout << "Stack is empty\n";
            return -1;
        }
        int top = s.top();
        return (top < minElement) ? minElement : top;
    }

    int getMin() {
        if (s.empty()) {
            cout << "Stack is empty\n";
            return -1;
        }
        return minElement;
    }

    bool empty() {
        return s.empty();
    }
};

int main() {
    SpecialStack st;
    st.push(5);
    st.push(3);
    st.push(7);
    st.push(2);

    cout << "Min: " << st.getMin() << endl; // 2
    st.pop();
    cout << "Min: " << st.getMin() << endl; // 3
    st.pop();
    cout << "Min: " << st.getMin() << endl; // 3
    st.pop();
    cout << "Min: " << st.getMin() << endl; // 5

    return 0;
}
