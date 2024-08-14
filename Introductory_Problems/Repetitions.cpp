#include <iostream>
#include <vector>
using namespace std;

int main() {
    string s; cin >> s;
    int max_count = 0; int iter = 0;
    while(iter < s.size()) {
        int temp = 1; char ch = s[iter];
        while(iter < s.size() - 1 && s[iter + 1] == ch) {
            temp++; iter++;
        }
        max_count = max(max_count, temp);
        iter++;
    }
    cout << max_count << endl;
}