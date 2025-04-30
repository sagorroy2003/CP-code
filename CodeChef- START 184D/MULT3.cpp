#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin>>n;
    
    if(n == 1)cout << 0 << endl;
    else if(n % 3 == 0)cout << n << endl;
    else if(n == 2 )cout << 3 << endl;
    else if(n == 4)cout << 3 << endl;
    else if(n== 5 )cout << 6 <<endl;
    else if( n == 7 )cout << 6 << endl;
    else if(n==8 )cout << 9 << endl;
    else if(n == 10)cout << 9 << endl;

}
