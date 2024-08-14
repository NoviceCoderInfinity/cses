// NOT WORKING. FIX REQUIRED

#include <bits/stdc++.h>
#define ll long long
using namespace std;

int digit_query(ll num) {
	if (num < 10) {return num;}
	ll num_dig = log(num);
	ll i_th_num_in_dig_len = num - ( pow(10, num_dig) - 1 );
	ll final_num = ceil( ((long double) i_th_num_in_dig_len) / ((long double) num_dig) );
	ll part_of_num = i_th_num_in_dig_len % num_dig;
	while ( log(final_num) <= part_of_num ) { final_num /= 10; }
	return static_cast<int>( final_num%10 );
}

int main() {
	int q; cin >> q; vector<int> ans;
	for (int i = 0; i < q; ++i) {
		ll tmp; cin >> tmp;
		ans.push_back(digit_query(tmp));
	}
	for (int i = 0; i < q; ++i) {
		cout << ans[i] << endl;
	}
	return 0;
}
