#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
int t;
cin>>t;
while(t--){
string s;
cin>>s;
string first,second;
int k=s.length();
for(int i=0; i<k/2; i++){
first+=s[i];
second+=s[k-i-1];
}
sort(first.begin(), first.end());
sort(second.begin(), second.end());
if(first == second)
{
cout<<"YES\n";
}
else
{
cout<<"NO\n";
}
}
return 0;
}
