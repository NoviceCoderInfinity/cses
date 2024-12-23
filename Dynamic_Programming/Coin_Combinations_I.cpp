#include <bits/stdc++.h>
using namespace std;

int main() {
	int num_coins, target; cin >> num_coins >> target;
	vector<int> coins_psbl;
	for (int i = 0; i < num_coins; ++i) {
		int c; cin >> c; coins_psbl.push_back(c);
	}
	
	int MODULUS = pow(10, 9) + 7;

	vector<int> dp(target + 1, 0); dp[0] = 1;
	for (int i = 1; i <= target; ++i) {
		for (int coin: coins_psbl) {
			if (i >= coin) {dp[i] = (dp[i] + dp[i-coin]) % MODULUS;}

		}
	}
	cout << dp.back() << endl;
	return 0;
}

