#include <iostream>
#include <queue>
using namespace std;

void firstNonRepeating(string s) {
    queue<char> q;
    int freq[256] = {0};  

    for (int i = 0; i < s.length(); i++) {
    char c = s[i];
    cout << c << " ";
        freq[c]++;        
        q.push(c);        

        
        while (!q.empty() && freq[q.front()] > 1) {
            q.pop();
        }

         if (q.empty()) cout << "-1 ";
        else cout << q.front() << " ";
    }
    cout << endl;
}

int main() {
    string s = "aabc";
    firstNonRepeating(s);
    return 0;
}
