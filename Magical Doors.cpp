#include <bits/stdc++.h>
using namespace std;
int main() {
int T;
string s;
cin>>T;
while(T--){
cin>>s;
int n= s.length(), count=0, magic=1;
for(int i=0;i<n;i++){
if (s[i]-48!=magic){
count+=1;
magic^=1;
}
}
cout<<count<<endl;
}
return 0;
}
