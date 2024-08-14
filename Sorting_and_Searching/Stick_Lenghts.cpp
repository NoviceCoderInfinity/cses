#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;
int main() {
    int n; cin>>n;
    vector<int> arr;
    while(n--){
        int i; cin>>i;
        arr.push_back(i);
    }
    n = arr.size();
    sort(arr.begin(), arr.end());    
    int Target_Element; long long int cost=0;
    Target_Element=arr[n/2];
    for(int i=0; i<n; ++i) {cost += abs(arr[i]-Target_Element);}
    cout<<cost<<endl;
}