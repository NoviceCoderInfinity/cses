#include <bits/stdc++.h>
using namespace std;

long long int two_knights(int n) {
	long long int count = 0;
	int x, y, x_, y_, rem;
	for (int i = 0; i < n*n - 1; ++i) {
		rem = 0;
		x = i / n; y = i % n;

		x_ = x - 2; y_ = y + 1;
		if (x_ >= 0 && x_ <= n-1 && y_ >= 0 && y_ <= n-1) {++rem;}
		x_ = x + 2; y_ = y + 1;
		if (x_ >= 0 && x_ <= n-1 && y_ >= 0 && y_ <= n-1) {++rem;}
		x_ = x - 1; y_ = y + 2;
		if (x_ >= 0 && x_ <= n-1 && y_ >= 0 && y_ <= n-1) {++rem;}
		x_ = x + 1; y_ = y + 2;
		if (x_ >= 0 && x_ <= n-1 && y_ >= 0 && y_ <= n-1) {++rem;}

		count += n*n - static_cast<long long int>(i + 1 + rem);
	}
	return count;
}

int main() {
	int k; cin >> k;
	if (k >= 1) {cout << 0 << endl;}
	if (k >= 2) {cout << 6 << endl;}
	for (int i = 3; i <= k; ++i) {
		cout << two_knights(i) << endl;
	}
}
