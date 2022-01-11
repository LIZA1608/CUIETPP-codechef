#include <bits/stdc++.h>

using namespace std;

int main(){

    int T;

    cin >> T;

    while(T--){

        int n;

        cin >> n;

        int* v = (int*) malloc(n*sizeof(int));
    

        for(int i = 0; i < n; i++){
            cin >> v[i];
        }

        sort(v, v + n);
        
        int minimum = v[1] - v[0];

        for(int i = 1; i < n - 1; i++){
            minimum = min(v[i + 1] - v[i], minimum);
        }
        cout << minimum << endl;
        free(v);
    }

    return 0;
}
