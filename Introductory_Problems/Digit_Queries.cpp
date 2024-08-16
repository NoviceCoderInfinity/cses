// NOT WORKING. FIX REQUIRED

#include <bits/stdc++.h>
#define ull unsigned long long
using namespace std;

ull L_Max = 1e18;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	vector<short> digits;

	int test; cin >> test;
	while(test--) {
		ull n; cin >> n;
		ull sum = 0; ull i = 0;
		ull nxt_add = 9 * pow(10, 0) * (0 + 1);
		
		while (sum + nxt_add < n) {
			sum += nxt_add; ++i;
			nxt_add = 9 * pow(10, i) * (i + 1);
		}
		ull tmp = n - sum;
		ull row = static_cast<unsigned long long>( ceil( (long double)tmp / (long double)(i + 1) ) );
		ull col = (n - sum) % (i + 1) - 1;
		if (col == -1) {col = i;}
		ull num = pow(10, i) + row - 1;
		string s = to_string(num);
		short res = s[col] - '0';
		digits.push_back(res);
	}

	for (auto &d : digits) {
		cout << d << "\n";
	}

	return 0;
}