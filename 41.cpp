#include <iostream>
using namespace std;

#define SIZE 5

class Queue {
    int arr[SIZE];
    int front, rear;
public:
    Queue() { front = -1; rear = -1; }

    bool isEmpty() { 
        return front == -1;
     }
    bool isFull() { 
        return rear == SIZE - 1;
     }

    void enqueue(int val) {
        if (isFull()) { 
            cout << "Queue is FULL!\n";
             return;
             }
        if (isEmpty()) front = 0;
        arr[++rear] = val;
        cout << val << " inserted.\n";
    }

    void dequeue() {
        if (isEmpty()) { 
            cout << "Queue is EMPTY!\n"; 
            return; 
        }
        cout << arr[front] << " removed.\n";
        if (front == rear) { 
            front = rear = -1; }

        else front++;
    }

    void peek() {
        if (!isEmpty()) {
            cout << "Front: " << arr[front] << "\n";
        }
        else {
            cout << "Queue is EMPTY!\n";
        }
    }

    void display() {
        if (isEmpty()) { 
            cout << "Queue is EMPTY!\n";
             return; }
        cout << "Queue: ";
        for (int i = front; i <= rear; i++) cout << arr[i] << " ";
        cout << "\n";
    }
};

int main() {
    Queue q;
    int choice, val;

    do {
        cout << "\n1.Enqueue 2.Dequeue 3.Peek 4.Display 5.Exit\n";
        cin >> choice;
        switch (choice) {
            case 1: cout << "Enter value: "; cin >> val; q.enqueue(val); break;
            case 2: q.dequeue(); break;
            case 3: q.peek(); break;
            case 4: q.display(); break;
            case 5: cout << "Bye!\n"; break;
            default: cout << "Invalid choice!\n";
        }
    } while (choice != 5);
}
