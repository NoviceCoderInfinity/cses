#include <bits/stdc++.h>
using namespace std;

unordered_map<int, vector<string>> mp = {
    {1, {"0", "1"}}
};

void gray_code(int n) {
	if (mp.find(n) != mp.end()) {return;}
	vector<string> n_mp;
	gray_code(n-1);
	vector<string> n_1_mp = mp[n-1];
	for (int i = 0; i < n_1_mp.size(); ++i) {
		string tmp = "0" + n_1_mp[i];
//		cout << "Adding " << tmp << " to mp map" << endl;
		n_mp.push_back(tmp);
	}
	for (int i = n_1_mp.size() - 1; i >= 0; --i) {
		string tmp = "1"  + n_1_mp[i];
//		cout << "Adding " << tmp << " to mp map" << endl;
		n_mp.push_back(tmp);
	}
	mp[n] = n_mp;
	return;
}

int main() {
	int n; cin >> n;
	if (mp.find(n) == mp.end()) { gray_code(n); }
	for (string s: mp[n]) {
		cout << s << endl;
	}
	return 0;
}
