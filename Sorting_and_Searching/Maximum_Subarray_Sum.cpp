#include <bits/stdc++.h>
using namespace std;

int main() {
	int n; cin >> n; vector<int> nums(n);
	for (int i = 0; i < nums.size(); i++) {
		cin >> nums[i];
	}
	long long max_sub_arr_sum = nums[0], curr_sum = nums[0];
	for (int i = 1; i < nums.size(); i++) {
		curr_sum = max((long long)nums[i], curr_sum + (long long)nums[i]);
		max_sub_arr_sum = max(max_sub_arr_sum, curr_sum);
	}
	cout << max_sub_arr_sum << endl;
}

