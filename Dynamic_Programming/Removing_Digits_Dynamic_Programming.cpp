#include <bits/stdc++.h>
using namespace std;

int main() {
	int n; cin >> n;
	vector<int> dp(n+1, INT_MAX); dp[0]=0; 
	for(int i = 1; i <= n; ++i) {
		int tmp = i;
		while(tmp) {
			int dig = tmp % 10; tmp /= 10;
			if (!dig) {continue;}
			dp[i] = min(dp[i], dp[i-dig]+1);
		}
	}
	cout << dp[n] << endl;
	return 0;
}
