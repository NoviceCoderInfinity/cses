#include <iostream>
using namespace std;
int main() {
    long int n,ans=0; cin>>n;
    for (long int i=5;i<=n;i*=5){
        ans+=n/i;
    }
    cout<<ans;
    return 0;
}