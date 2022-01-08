#include <iostream>
#include<string>
using namespace std;
int main() {
long long t,n,i;
cin>>t;
while(t--){
cin>>n;
string s;
cin>>s;
long long c=0;
for(i=0;i<n;i++){
if(s[i]=='1'){
c++;
}
}
long long x = (c*(c+1))/2;
cout<<x<<endl;
}
return 0;
}

