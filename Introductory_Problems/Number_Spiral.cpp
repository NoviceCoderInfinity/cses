#include <iostream>
using namespace std;
int main() {
int n;cin>>n;long int x,y,out,m;
while(n--){
cin>>x>>y;m=(x>y?x:y);
if (m%2==0){
if (x<=y){out=(m-1)*(m-1)+x;}
else{out=m*m-y+1;}
}else{
if (x<=y){out=m*m-x+1;}
else{out=(m-1)*(m-1)+y;}
}
cout<<out<<endl;
}
}
