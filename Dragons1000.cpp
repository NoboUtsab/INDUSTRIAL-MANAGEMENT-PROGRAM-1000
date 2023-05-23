#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int s, n;
    cin >> s >> n;
    pair<int, int> m[n];
    for (int i = 0; i < n; i++) {
        cin >> m[i].first >> m[i].second;
    }
    sort(m, m + n);
    for (int i = 0; i < n; i++) {
        if (s <= m[i].first) {
            cout << "NO" << endl;
            return 0;
        }
        s += m[i].second;
    }
    cout << "YES" << endl;
    return 0;
}
