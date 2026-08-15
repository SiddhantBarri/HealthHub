#include <iostream>
#include <string>
#include <vector>

using namespace std;

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    
    // The 4 only possible valid repeating patterns 
    string p[4] = {"0011", "0110", "1100", "1001"};
    
    int ans = 0;
    for (int i = 0; i < 4; ++i) {
        bool isValidMatch = true;
        for (int j = 0; j < n; ++j) {
            // A mismatch occurs if the character isn't a wildcard and doesn't match the pattern
            if (s[j] != '?' && s[j] != p[i][j % 4]) {
                isValidMatch = false;
                break;
            }
        }
        if (isValidMatch) {
            ans++;
        }
    }
    
    // Outputting modulo 998244353 as asked (though ans <= 4 always)
    cout << ans % 998244353 << "\n";
}

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}
