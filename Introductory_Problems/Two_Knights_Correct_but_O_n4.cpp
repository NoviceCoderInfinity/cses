#include <bits/stdc++.h>
using namespace std;

bool is_Valid(int n, int n1, int n2) {
	int x1 = n1 / n;
	int y1 = n1 % n;
	int x2 = n2 / n;
	int y2 = n2 % n;

	if (abs(x1 - x2) == 2 && abs(y1 - y2) == 1) {return false;}
	if (abs(x1 - x2) == 1 && abs(y1 - y2) == 2) {return false;}

	return true;
}


long long int two_knights(int n) {
	set<pair<int, int>> s;
	for (int i = 0; i < n*n; ++i) {
		for (int j = 0; j < n*n; ++j) {
			if (i == j) {continue;}
			if (is_Valid(n, i, j)) {
//				cout << "i: " << i << " and j: " << j << " are valid\n";
				if (i < j) {s.insert({i, j});}
				else {s.insert({j, i});}

			}
		}
	}
	return s.size();
}

int main() {
	int k; cin >> k;
	if (k >= 1) {cout << 0 << endl;}
	if (k >= 2) {cout << 6 << endl;}
	for (int i = 3; i <= k; ++i) {
		cout << two_knights(i) << endl;
	}
}
