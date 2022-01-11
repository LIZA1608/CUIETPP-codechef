#include <bits/stdc++.h>  
 
using namespace std;
 
typedef long long ll;
typedef long double ld;
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
int main()
{
    fast_cin();
    int t;
    cin >> t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        int mul=b*c,temp=0;
        int arr[101]={0};
        for(int i=0;i<a;i++){
            int x;
            cin>>x;
            for(int i=x;(i<=x+mul)&&(i<=100);i++){
                if(arr[i]!=1){
                    arr[i]=1;
                }
            }
            for(int i=x-1;(i>=x-mul)&&(i>0);i--){
                if(arr[i]!=1){
                    arr[i]=1;
                }
            }  
        }for(int i=1;i<=100;i++){
            if(arr[i]==0) {
                temp++;
            }
        }cout<<temp<<endl;
    }
    return 0;
}
