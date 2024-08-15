#include <bits/stdc++.h>
using namespace std;

int main() {
	unordered_map<char, int> mp;
	string inp_str; cin >> inp_str;
	bool one_odd = false; char ch_one_odd;

	int i = 0, j = inp_str.size() - 1;
	for (char ch: inp_str) {++mp[ch];}
	for (auto it: mp) {
		if (it.second % 2 == 1) {
			if (one_odd == true) {cout << "NO SOLUTION\n"; return 0;}
			else {ch_one_odd = it.first; one_odd = true;}
		}
		else {
			while(it.second && i < j) {
				inp_str[i] = it.first; inp_str[j] = it.first;
				++i; --j; it.second -= 2;
			}
		}
	}
	while(one_odd && mp[ch_one_odd] != 0) {
		if (mp[ch_one_odd] == 1) {inp_str[i] = ch_one_odd; mp[ch_one_odd] -= 1;}
		else {
			inp_str[i] = ch_one_odd; inp_str[j] = ch_one_odd;
			++i; --j; mp[ch_one_odd] -= 2;
		}
	}

	cout << inp_str << endl;
	return 0;
}
