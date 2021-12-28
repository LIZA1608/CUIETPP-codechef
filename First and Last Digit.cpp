// Problem Code: FLOW004

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int N;
	    cin>>N;
	    int s;
	    int l,r;
	    l=N%10;
	    while(N>0)
	    {
	     r = N%10;
	     N=N/10;
	    }
	    s=l+r;
	    cout<<s<<endl;
	}
	return 0;
}
