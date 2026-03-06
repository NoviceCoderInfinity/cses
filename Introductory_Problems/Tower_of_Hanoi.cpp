#include <bits/stdc++.h>
using namespace std;

void tower_of_hanoi(int n, int origin = 1, int target = 3) {
	if (n == 1) {
		cout << origin << " " << target << endl;
		return;
	} else {
		int temp_target = 6 - origin - target;
		tower_of_hanoi(n-1, origin, temp_target) ;
		cout << origin << " " << target << endl;
		tower_of_hanoi(n-1, temp_target, target);
		return;
	}
}

int main() {
	int n; cin >> n;
	cout << (1 << n) - 1 << endl;
	tower_of_hanoi(n, 1, 3);
}
