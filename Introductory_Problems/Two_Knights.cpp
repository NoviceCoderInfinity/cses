#include <bits/stdc++.h>
using namespace std;

long long int two_knights(int n) {
	if (n == 1) {return 0;}
	else if (n == 2) {return 6;}
	else if (n == 3) {return 28;}
	long long int total_pairs = static_cast<long long int>(n * n) * static_cast<long long int>(n * n - 1) / 2;
	long long int invalid_pairs = 4 * static_cast<long long int>( (n - 2) * (n - 2) );
	invalid_pairs += 2 * 2 * (n - 4); // Bottom 2 * (n - 4) cells have only 2 invalid moves
	invalid_pairs += 2 * 2 * (n - 4); // Left most and Right most rows 2 * (n - 4) cells have only 2 invalid moves
	invalid_pairs += 3 * 2 * (n - 4); // Second Left most and Second Right most 2 * ( n - 4) cells have only 3 invalid moves;
	invalid_pairs += 28;
	return total_pairs - invalid_pairs + (n - 2) * 10;
}

int main() {
	int k; cin >> k;
	for (int i = 1; i <= k; ++i) {
		cout << two_knights(i) << endl;
	}
}
