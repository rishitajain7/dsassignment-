#include <iostream>
using namespace std;

void printBinaryNumbers(int n) {
    for (int i = 1; i <= n; i++) {
        string binary = "";
        int num = i;
        while (num > 0) {
            binary = (num % 2 == 0 ? "0" : "1") + binary;
            num /= 2;
        }
        cout << binary << endl;
    }
}

int main() {
    int n = 2;
    printBinaryNumbers(n);
    return 0;
}
