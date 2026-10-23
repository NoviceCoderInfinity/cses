#include <bits/stdc++.h>
using namespace std;

struct TrieNode {
	TrieNode* children[26];
	bool isEnd;

	TrieNode() {
		for (int i = 0; i < 26; ++i) {
			children[i] = nullptr;
		}
		isEnd = false;
	}
};

class Trie {
public:
	TrieNode* root;

	Trie() {
		root = new TrieNode();
	}
	
	void insert(string& word) {
		TrieNode* curr = root;
		for (char c: word) {
			int idx = c - 'a';
			if (curr->children[idx] == nullptr)
				curr->children[idx] = new TrieNode();
			curr = curr->children[idx];
		}
		curr->isEnd = true;
	}
};

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	const int MOD=1e9+7;

	string s; int n, k;
	cin >> s >> k; n = s.size();
	
	Trie t;

	for (int i = 0; i < k; ++i) {
		string word; cin >> word;
		t.insert(word);
	}

	vector<int> dp(n+1, 0); dp[0] = 1;

	for (int i = 0; i < n; ++i) {
		if (dp[i] == 0) continue;
		TrieNode* curr = t.root;

		for (int j = i; j < n; ++j) {
			int idx = s[j] - 'a';
			if (curr->children[idx] == nullptr)
				break;
			curr = curr->children[idx];
			if (curr->isEnd)
				dp[j+1] = (dp[j+1] + dp[i]) % MOD;
		}
	}

	cout << dp[n] << endl;
	return 0;
}
