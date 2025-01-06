#include <bits/stdc++.h>
using namespace std;

int main() {
	int n; cin >> n; vector<int> coins(n);
	for (int i = 0; i < n; ++i) {
		cin >> coins[i];
	}

	sort(coins.begin(), coins.end());
	set<int> results;
	results.insert(0);

	for (int coin: coins) {
		vector<int> tmp(results.begin(), results.end());
		for (int t: tmp) {
			results.insert(t + coin);
		}
		tmp.clear();
	}
	
	results.erase(0);
	cout << results.size() << endl;
	for (int result: results) {
		cout << result << " ";
	}
	cout << endl;
}
