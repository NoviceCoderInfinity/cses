#include <iostream>
#include <vector>
using namespace std;

int combinations(int n) {
    if (n < 0) return 0;
    vector<int> dp(n + 1, 0);
    dp[0] = 1;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= 6 && i - j >= 0; j++) {
            dp[i] = (dp[i] + dp[i - j]) % 1000000007;
        }
    }
    return dp[n];
}

int main () {
    int n; cin >> n; 
    cout << combinations(n) % 1000000007 << endl;
    return 0;
}