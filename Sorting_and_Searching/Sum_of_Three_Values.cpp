#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, x; scanf("%d %d", &n, &x); 
    vector<pair<int, int>> arr(n, {0, 0});
    for (int i = 0; i < n; ++i) {
        scanf("%d", &arr[i].first);
        arr[i].second = i + 1; }
    sort(arr.begin(), arr.end());
    for (int i = 0; i < n - 2; ++i) {
        int left = i + 1, right = n - 1;
        while (left < right) {
            long int temp = static_cast<long int>(arr[i].first) + static_cast<long int>(arr[left].first) + static_cast<long int>(arr[right].first);
            if (temp == x) {
                printf("%d %d %d\n", arr[i].second, arr[left].second, arr[right].second);
                return 0; }
            else if (temp < x) {++left;}
            else {--right;}
        }
    }
    printf("IMPOSSIBLE\n"); return 0;
}