#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,n,k,rem,r;
	cin>>t;
	while(t--)
	{
	    cin>>n>>k;
	    r=0;
	    for(int i=1;i<=k;i++)
	    {
	        rem=n%i;
	        if(rem>r)
	        {
	        r=rem;
	        }
	    }
	    cout<<r<<endl;
	}
	return 0;
}
