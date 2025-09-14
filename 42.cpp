#include <iostream>
using namespace std;

#define SIZE 5

class CircularQueue {
    int arr[SIZE];
    int front, rear;
public:
    CircularQueue() { 
        front = rear = -1; 
    }

    bool isEmpty() { 
        return front == -1;
     }
    bool isFull() { 
        return (rear + 1) % SIZE == front;
     }

    void enqueue(int val) {
        if (isFull()) {
             cout << "Queue FULL!\n"; 
             return; 
            }
        if (isEmpty()) {
            front = rear = 0;}
        else {
            rear = (rear + 1) % SIZE;}
        arr[rear] = val;
        cout << val << " inserted.\n";
    }

    void dequeue() {
        if (isEmpty()) { 
            cout << "Queue EMPTY!\n"; 
            return;
         }
        cout << arr[front] << " removed.\n";
        if (front == rear) {
            front = rear = -1;
        }
        else{
           front = (front + 1) % SIZE;
        }
    }

    void peek() {
        if (!isEmpty()) {
            cout << "Front: " << arr[front] << "\n";}
        else {
            cout << "Queue EMPTY!\n";}
    }

    void display() {
        if (isEmpty()) { 
            cout << "Queue EMPTY!\n"; 
            return;
         }
        cout << "Queue: ";
        int i = front;
        while (true) {
            cout << arr[i] << " ";
            if (i == rear) break;
            i = (i + 1) % SIZE;
        }
        cout << "\n";
    }
};

int main() {
    CircularQueue cq;
    int choice, val;
    do {
        cout << "\n1.Enqueue 2.Dequeue 3.Peek 4.Display 5.Exit\n";
        cin >> choice;
        switch (choice) {
            case 1: cout << "Enter value: "; cin >> val; cq.enqueue(val); break;
            case 2: cq.dequeue(); break;
            case 3: cq.peek(); break;
            case 4: cq.display(); break;
            case 5: cout << "Bye!\n"; break;
            default: cout << "Invalid choice!\n";
        }
    } while (choice != 5);
}
