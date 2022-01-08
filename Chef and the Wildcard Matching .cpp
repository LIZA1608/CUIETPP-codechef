#include <iostream>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
string s1,s2;
cin>>s1>>s2;
bool flag=1;
for(int i=0;i<s1.size();i++){
if(s1[i]==s2[i]){
continue;
}
else if(s1[i]=='?'||s2[i]=='?'){
continue;
}
else{
flag=0;
break;
}
}
if(flag)
cout<<"Yes"<<endl;
else
cout<<"No"<<endl;
}
return 0;
}
