#include <bits/stdc++.h>
using namespace std;

void solve(){
     int n; cin >> n;
	    vector<int> arr;
	    
	    int d = -2, dd = 2 , ddd=1;
	    
	    int a = n / 2;
	    int b = a - 1;
	    
	    if(n == 1){cout << -1 << endl;return;}
	    
	    if(n % 2 == 0){
	        for(int i=0; i<n/2; i++){
	            arr.push_back(d);
	        }
	        for(int i=0; i<n/2; i++){
	            arr.push_back(dd);
	        }
	        for(auto i : arr)cout << i << " ";
	        cout << endl;
	        return;
	    }
	    else{
	        for(int i=0; i< a; i++){
	            arr.push_back(d);
	        }
	        for(int i=0; i<b; i++){
	            arr.push_back(dd);
	        }
	        arr.push_back(ddd);
	        arr.push_back(ddd);
	        
	        for(auto i : arr)cout << i << " ";
	        cout << endl;
	        
	        return;
	    }
	        
}

int main() {
	int t; cin >> t;
	
	while(t--){
	   solve();
	    }
	    
	    
	}


