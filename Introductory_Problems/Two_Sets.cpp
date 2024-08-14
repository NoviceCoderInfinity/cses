#include <iostream>
using namespace std;
int main(){
int inp;cin>>inp;
if(inp%4==1||inp%4==2){cout<<"NO"<<endl;return 0;}
cout<<"YES"<<endl;
    if(inp%4==0){
        int n=inp/2;cout<<n<<endl;
        for(int i=1;i<=n;++i){
            if(i%2==0){cout<<i*2<<" ";}
            else{cout<<i*2-1<<" ";}
        }
        n=inp-n;cout<<endl<<n<<endl;
        for(int i=1;i<=n;++i){
            if(i%2==1){cout<<i*2<<" ";}
            else{cout<<i*2-1<<" ";}
        }
    }
    else{
    int n=inp/2+1;cout<<n<<endl;
    for(int i=1;i<=n;++i){
        if(i<3){cout<<i<<" ";}
        else if(i==3){cout<<4<<" ";}
        else if(i==4){cout<<7<<" ";}
        else if(i%2==0){cout<<i*2-2<<" ";}
        else{cout<<i*2-1<<" ";}
    }
    n=inp-n;cout<<endl<<n<<endl;
    for(int i=1;i<=n;++i){
        if(i==2){cout<<5<<" ";}
        else if(i==3){cout<<6<<" ";}
        else if(i%2==0){cout<<i*2<<" ";}
        else{cout<<i*2+1<<" ";}
    }
    cout<<endl;
    }
}