#include <bits/stdc++.h>
using namespace std;

int main() {
	int n = 8;
	int ans = 0;
	set<int> cols, diag1, diag2;
	vector<int> pos(n, -1);
	vector<int> next_col(n, 0);

	vector<set<int>> reserved(n);
	for (int i = 0; i < n; ++i) {
		string s; cin >> s;
		for (int j = 0; j < n; ++j) {
			if (s[j] == '*')
				reserved[i].insert(j);
		}
	}


	int i = 0;
	while (i >= 0) {
		bool is_psbl = false;
		int j = next_col[i];
		while (!is_psbl && j < n) {
			if (cols.count(j) || diag1.count(i-j) || diag2.count(i+j) || reserved[i].count(j)) {
				++j;
				continue;
			}
			cols.insert(j);
			diag1.insert(i-j);
			diag2.insert(i+j);

			pos[i] = j;
			next_col[i] = j+1;

			is_psbl = true;
			++i;
		}

		if (!is_psbl) {
			next_col[i] = 0;
			--i;

			if (i >= 0) {
				int j = pos[i];
				cols.erase(j);
				diag1.erase(i-j);
				diag2.erase(i+j);
				continue;
			}
		}

		if (i == n) {
			++ans;
			--i;

			int j = pos[i];
			cols.erase(j);
			diag1.erase(i-j);
			diag2.erase(i+j);
		}
	}

	cout << ans << endl;
	return 0;
}

