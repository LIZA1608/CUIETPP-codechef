#include <iostream>
using namespace std;
int main() {
// your code goes here
int r;
cin >> r;
while(r--){
int l;
string s;
cin >> l>>s;
int state =0;
for(int i=0;i<l;i++)
{
if(state ==0 and s[i]=='H')
{
state = 1;
}
else if(state ==1 and s[i]=='T')
{
state = 0;
}
else if(state ==0 and s[i]=='T')
{
state = 1;
break;
}
else if(state ==1 and s[i]=='H')
{
state = 1;
break;
}
}
if(state !=0) cout << "Invalid"<<endl;
else cout<< "Valid"<<endl;
}
return 0;
}
