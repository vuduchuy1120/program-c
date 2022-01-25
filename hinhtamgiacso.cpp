#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    for (int i = n; i >= 1; --i) {
        int sp = (n - i) * 2;
        for (int j = 1; j <= sp; ++j) {
            cout << " ";
        }
        for (int j = 1; j < i; ++j) {
            cout << j % 10 << " ";
        }
        cout << i % 10 << " ";
        for (int j = i - 1; j >= 1; --j) {
            cout << j % 10 << " ";
        }
        cout << "\n";
    }
    return 0;
}
