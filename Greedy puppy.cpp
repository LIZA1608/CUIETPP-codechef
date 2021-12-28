// Problem Code: GDOG

#include <iostream>
using namespace std;
	int main()
{
      int x,y,t;
      cin>>t;
      while(t--)
      {
          cin>>x>>y;
         int mx=0;
         for(int i=2;i<=y;i++)
         {
             int a=x%i;
             mx=max(mx,a);
         }
         cout<<mx<<endl;
      }

}
