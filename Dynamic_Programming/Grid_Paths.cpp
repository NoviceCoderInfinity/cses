#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	ll n; cin >> n; ll mod = 1e9 + 7;
	vector<vector<ll>> dp(n, vector<ll>(n, 0));
	for (ll i = 0; i < n; ++i) {
		string s; cin >> s;
		if (i == 0 && s[0] == '.') {dp[i][0] = 1;}
		for (ll j = 0; j < n; ++j) {
			if (s[j] == '*') {continue;}
			if (i > 0) {dp[i][j] += dp[i-1][j]; dp[i][j] %= mod;}
			if (j > 0) {dp[i][j] += dp[i][j-1]; dp[i][j] %= mod;}
		}
	}
	cout << dp[n-1][n-1] % mod << endl;
	return 0;
}
