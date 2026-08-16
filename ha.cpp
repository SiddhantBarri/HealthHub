#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    
    // Count initial number of blocks
    int c = 1;
    for (int i = 1; i < n; ++i) {
        if (s[i] != s[i - 1]) {
            c++;
        }
    }
    
    int max_reduction = 0;
    // Iterate over all possible characters to delete (exclusive of the first and last)
    for (int i = 1; i < n - 1; ++i) {
        if (s[i] != s[i - 1] && s[i] != s[i + 1]) {
            if (s[i - 1] == s[i + 1]) {
                max_reduction = max(max_reduction, 2);
            } else {
                max_reduction = max(max_reduction, 1);
            }
        }
    }
    
    // The minimum possible length of the resulting compressed string
    cout << c - max_reduction << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}
