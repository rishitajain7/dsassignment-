#include <iostream>
using namespace std;

int main() {
    int matrix[20][20], n;

    cout << "Enter size of square matrix (nxn): ";
    cin >> n;

    cout << "Enter matrix elements: "<<endl;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> matrix[i][j];

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            swap(matrix[i][j], matrix[j][i]);
        }}

    cout << "Transpose of the matrix: "<<endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            cout << matrix[i][j] << " "<< endl; }

    return 0;}
