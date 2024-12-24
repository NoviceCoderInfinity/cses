#include <bits/stdc++.h>
using namespace std;

int count_divisors(int num) {
	if (num < 3) {return num;}

	int count = 2;
	int i = 2;
	
	for ( ; i * i < num; ++i) {if (num % i == 0) {count += 2;}}
	if (i * i == num) {++count;}

	return count;
}

int main() {
	int n; cin >> n;
	vector<int> results(n, 0);
	map<int, int> div_count;
	for (int i = 0; i < n; ++i) {
		int x; cin >> x;
		if (div_count.find(x) == div_count.end()) {
			results[i] = count_divisors(x);
			div_count[x] = results[i];
		}
		else {
			results[i] = div_count[x];
		}
	}
	for (int result: results) {
		cout << result << endl;
	}
}

