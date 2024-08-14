#include <iostream> 
#include <vector>
using namespace std;

int main() {
    int n; cin >> n;
    long long ans = 1;
    for (int i = 0; i < n; i++) {ans = (ans * 2) % 1000000007;}
    cout << ans << endl;
    return 0;
}