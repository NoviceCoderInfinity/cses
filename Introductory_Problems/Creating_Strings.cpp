#include <bits/stdc++.h>
using namespace std;

set<string> all;
int n;

void all_strs(string curr, map<char, int> all_char) {
	if (all_char.empty()) {all.insert(curr); return;}
	for (const auto& pair : all_char) {
		map<char, int> copy = all_char;
		copy[pair.first] -= 1;
		if (copy[pair.first] == 0) {copy.erase(pair.first);}
		all_strs(curr + pair.first, copy);
	}
}

int main() {
	string s; cin >> s;
	n = s.size();
	map<char, int> all_char;
	for (char c: s) {all_char[c] += 1;}
	all_strs("", all_char);
	cout << all.size() << endl;
	for (string s: all) {
		cout << s << endl;
	}
}
