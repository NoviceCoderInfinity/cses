#include<bits/stdc++.h>
using namespace std;

void populate(int i, map<int, set<int>>& child, vector<int>& subordinates) {
	if (child[i].empty()) {
		subordinates[i] = 0;
		return;
	}
	
	int tmp = 0;
	for (const auto& val: child[i]) {
		populate(val, child, subordinates);
		tmp += subordinates[val]+1;
	}

	subordinates[i] = tmp;
}
	
int main() {
	int n; cin >> n;
	map<int, set<int>> child;
	vector<int> subordinates(n+1, 0);

	for (int i = 2; i < n+1; ++i) {
		int tmp; cin >> tmp;
		child[tmp].insert(i);
	}
	
	populate(1, child, subordinates);

	for (int i = 1; i < n+1; ++i) cout << subordinates[i] << " ";
	cout << "\n";

	return 0;
}
