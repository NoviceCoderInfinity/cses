#include <bits/stdc++.h>
#define LL long long
using namespace std;

LL MODULUS = 1e9 + 7;

LL myPow(LL x, LL y) {
    LL result = 1;
    x = x % MODULUS;
    while (y > 0) {
        if (y % 2 == 1) {
            result = (result * x) % MODULUS;
        }
        y = y / 2;
        x = (x * x) % MODULUS;
    }
    return result;
}

int main() {
	LL n; cin >> n; vector<LL> results(n);
	for (LL i = 0 ; i < n; ++i) {
		LL x, y; cin >> x >> y;
		results[i] = myPow(x, y);
	}

	for (LL result: results) {
		cout << result << endl;
	}
}
