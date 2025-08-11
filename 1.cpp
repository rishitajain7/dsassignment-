#include <iostream>
using namespace std;

int arr[50]; 
int n = 0; 

void create(){
    cout<< "Enter number of elements: ";
    cin>>n;
    cout << "Enter "<< n << " elements: "<<endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }}

void display() {
    if (n == 0) {
        cout << "Array is empty"<<endl;
        return;
    }
    cout << "elements of array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void insert() {
    int pos, val;
    cout << "Enter position (1 to " << n + 1 << "): ";
    cin >> pos;
    if (pos < 1 || pos > n + 1) {
        cout << "Invalid position.\n";
        return;
    }
    cout << "Enter value to insert: ";
    cin >> val;

    for (int i = n; i >= pos; i--) {
        arr[i] = arr[i - 1];
    }
    arr[pos - 1] = val;
    n++;
    cout << "Element inserted."<<endl;
}

void deleteElement(){
        int pos;
    cout << "Enter position (1 to " << n << ") to delete: ";
    cin >> pos;
    if (pos < 1 || pos > n) {
        cout << "Invalid position."<<endl;
        return;
    }
    for (int i = pos - 1; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    n--;
    cout << "Element deleted."<<endl;
}

void linearSearch() {
    int key, found = 0;
    cout << "Enter element to search: ";
    cin >> key;
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            cout << "Element found at position " << i + 1 << endl;
            found = 1;
            break;
        }
    }
    if (!found) {
        cout << "Element not found."<<endl;
    }
}

int main() {
    int choice;
    do {
        cout << "\n---- MENU ----\n";
        cout << "1. CREATE"<<endl;
        cout << "2. DISPLAY"<<endl;
        cout << "3. INSERT"<<endl;
        cout << "4. DELETE"<<endl;
        cout << "5. LINEAR SEARCH"<<endl;
        cout << "6. EXIT"<<endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: create(); break;
            case 2: display(); break;
            case 3: insert(); break;
            case 4: deleteElement(); break;
            case 5: linearSearch(); break;
            case 6: cout << "Exiting program.\n"; break;
            default: cout << "Invalid choice.\n";
        }
    } while (choice != 6);

    return 0;
}