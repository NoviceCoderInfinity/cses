#include <bits/stdc++.h>
using namespace std;

int main() {
	int n; cin >> n;

	long int steps = 0;
	while(n) {
		int tmp = n; int l_dig = tmp%10;
		while(tmp) {l_dig = max(l_dig, tmp%10); tmp /= 10;}
		++steps;
		n -= l_dig;
	}

	cout << steps << endl;
	return 0;
}
