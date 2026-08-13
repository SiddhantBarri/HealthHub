#include <iostream>
#include <algorithm>

using namespace std;

void solve() {
    long long a[3];
    cin >> a[0] >> a[1] >> a[2];
    
    // Sort the array to easily identify x (min), y (middle), and z (max)
    sort(a, a + 3);
    
    // The minimum range is either the original range (z - x) 
    // or the middle element (y) obtained after one optimal replacement.
    long long min_range = min(a[2] - a[0], a[1]);
    
    cout << min_range << "\n";
}

int main() {
    // Optimize standard I/O operations for performance
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}
