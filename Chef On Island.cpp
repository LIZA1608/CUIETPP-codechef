#include<iostream>
#include <algorithm>
using namespace std;

int main() {
    int run;
    cin>>run;
    int x;
    int y;
    int xr;
    int yr;
    int D;
    int food;
    int water;
    int survive;
    
    for(int i=0;i<run;i++){
        cin>>x;
        cin>>y;
        cin>>xr;
        cin>>yr;
        cin>>D;
        food=x/xr;
        water=y/yr;
        survive=min(food,water);
        if(survive>=D){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
	
	return 0;
	}
