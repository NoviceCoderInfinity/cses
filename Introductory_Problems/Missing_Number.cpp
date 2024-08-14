#include <iostream>
using namespace std;
int main() {int n;cin>>n;long int out=n;int input;while(--n){cin>>input;out=out^n^input;}cout<<out;return 0;}