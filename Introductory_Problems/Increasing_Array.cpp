#include <iostream>
using namespace std;
int main() {
    int n; long int ip1,ip2,ans=0; cin>>n>>ip1;
    for (int i=1;i<n;++i){
        cin>>ip2;
        if (ip2<ip1) {ans+=ip1-ip2;}
        else {ip1=ip2;}
    }
    cout<<ans;
    return 0;
}