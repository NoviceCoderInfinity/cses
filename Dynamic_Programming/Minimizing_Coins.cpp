#include <bits/stdc++.h>
using namespace std;

int main() {
	int num_coins, target;
	vector<int> coins_psbl;

	cin >> num_coins >> target;
	vector<int> dp(target + 1, INT_MAX); dp[0] = 0;
	
	for (int i = 0; i < num_coins; ++i) {
		int c; cin >> c; coins_psbl.push_back(c);
	}
	
	for (int i = 1; i <= target; ++i) {
		for (int coin: coins_psbl) {
			if (i >= coin) {
				if (dp[i-coin] > INT_MAX - 1) {continue;}
				dp[i] = min(dp[i], dp[i-coin] + 1);
			}
		}
	}

	if (dp.back() == INT_MAX) {dp[target] = -1;}
	cout << dp.back() << endl;
	return 0;
}
