#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,k,count=0;
	    cin>>n>>k;
	    int arr[n]={};
	    for (int i{};i<n;i++){
	        cin>>arr[i];
	        if ((arr[i]+k)%7==0)
	            count+=1;
	    }
	    cout<<count<<endl;
	}
}
