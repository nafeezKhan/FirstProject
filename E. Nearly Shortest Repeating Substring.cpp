#include <iostream>
#include <string>

using namespace std;

int shortestK(string s) {
    int n = s.length();

    // Check if all characters in s are the same
    bool all_same = true;
    for (int i = 1; i < n; ++i) {
        if (s[i] != s[i - 1]) {
            all_same = false;
            break;
        }
    }

    if (all_same) {
        return 1; // Shortest k is of length 1
    }

    // Check if s can be split into two equal halves
    if (n % 2 == 0 && s.substr(0, n / 2) == s.substr(n / 2)) {
        return n / 2; // Shortest k is half of s
    }

    // Check if s can be split into repeating pattern
    for (int len = 1; len <= n / 2; ++len) {
        if (n % len == 0) {
            bool valid = true;
            for (int i = 0; i < n; ++i) {
                if (s[i] != s[i % len]) {
                    valid = false;
                    break;
                }
            }
            if (valid) {
                return len; // Shortest k is the repeating pattern length
            }
        }
    }

    return n; // If no shorter k is found, k is the same as s
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        cout << shortestK(s) << endl;
    }

    return 0;
}
