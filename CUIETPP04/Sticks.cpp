#include <bits/stdc++.h>
using namespace std;
int main() {
	int t,n,i,max1,max2;
	cin>>t;
	while(t--){
	    max1=0;
	    max2=0;
	    cin>>n;
	    int a[n];
	    for(i=0;i<n;i++)
	        cin>>a[i];
	    sort(a,a+n);
	    for(i=n-1;i>0;i--){
	        if(max1!=0 && max2!=0)
	            break;
	        else if(a[i]==a[i-1] && max1==0){
	            max1=a[i];
	            i--;
	        }
	        else if(a[i]==a[i-1] && max2==0){
	            max2=a[i];
	            i--;
	        }
	    }
	    if(max1==0|| max2==0) cout<<"-1\n";
	    else cout<<max1*max2<<endl;
	}
	return 0;
}

