#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;cin>>t;
	while(t--){
	    int n,k;
	    cin>>n>>k;
	    int a[n];
	    for(int i=0;i<n;i++) cin>>a[i];
	    sort(a,a+n);
	    int child=0,parent=0;
	    if(k<=n/2){
	    for(int i=0;i<k;i++) child+=a[i];
	    for(int i=k;i<n;i++) parent+=a[i];
	    cout<<abs(parent-child)<<endl;}else{
	        
	    for(int i=0;i<n-k;i++) child+=a[i];
	    for(int i=n-k;i<n;i++) parent+=a[i];
	    cout<<abs(parent-child)<<endl;
	    }
	}
	return 0;
}
