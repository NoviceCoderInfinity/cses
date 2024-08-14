#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin>>n;
    set<int> arr;
    while(n--) {
        int temp; cin>>temp;
        arr.insert(temp);
    }
    cout<<int(arr.size())<<endl;
}