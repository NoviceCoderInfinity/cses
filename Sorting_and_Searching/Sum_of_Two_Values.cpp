#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n; long int x; cin >> n >> x; 
    vector<pair<int, int>> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i].first;
        arr[i].second = i + 1;  }
    sort(arr.begin(), arr.end());
    int left = 0, right = n - 1;
    while (left < right) {
        long int temp = static_cast<long int>(arr[left].first) + static_cast<long int>(arr[right].first);
        if (temp == x) {
            cout << arr[left].second << " " << arr[right].second << "\n";
            return 0; }
        else if (temp < x) {++left;}
        else {--right;}
    }
    cout << "IMPOSSIBLE\n"; return 0;
}