#include<bits/stdc++.h>
using namespace std;
int main() {
// your code goes here
string s;
cin>>s;
int freq[26]={0};
for(int i=0;i<s.length();i++)
{
freq[s[i]-'a']++;
}
int n;
cin>>n;
while(n--)
{
int flag=1;
string a;
cin>>a;
for(int i=0;i<a.length();i++)
{
if(freq[a[i]-'a']==0)
{
cout<<"No"<<endl;
flag=0;
break;
}
}
if(flag!=0)
cout<<"Yes"<<endl;
}
return 0;
}
