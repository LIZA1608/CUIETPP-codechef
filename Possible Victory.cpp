/*--Problem Code: T20MCH*/

#include<iostream>
using namespace std;

int main()
{

    int a[10][10],over,tri,temp,pos;
for(int i=0;i<3;i++)
{
    cin>>a[0][i];

}
temp=a[0][0]-a[0][2];
over=20-a[0][1];
tri=over*6;
pos=tri*6;

if(temp<pos)
{
    cout<<"\nYes";

}
else
{
    cout<<"\nNo";
}

}
