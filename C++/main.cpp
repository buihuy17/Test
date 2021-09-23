#define ll long long
#include<bits/stdc++.h>
using namespace std;
int ucln(int a, int b){
    int x = a, y = b;
    while (a != b){
        if(a>b) a = a - b;
        else    b = b - a;
    }
}

main(){
    int T;
    cin >> T ;
    int m , n ;
    while (T--){
        int a,b;
        cin >> a >> b ;
        ucln(a,b);
         cout << a << endl ;
    }
    return 0;
}