#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    vector<string> res;
    while(t--) {
        long long a, b;
        cin >> a >> b;
        if((a + b) % 3 == 0 && 2*a>=b && (2*a-b)%3 == 0 && 2*b>=a && (2*b-a)%3 == 0) {res.push_back("YES");} 
        else {res.push_back("NO");}
    }

    for(auto x: res) {
        cout << x << endl;
    }
    return 0;
}