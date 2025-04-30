#include <iostream>
#include <string>
using namespace std;


void solve(){
    int n; cin >> n;
    string s, t;
    cin >> s >> t;
    
    bool flag = false;
    
    if(1){
        for(int i=0; i<n ; i++){
            if(s[i] == t[i])continue;
            else flag = true;
        }
        
        if(!flag){
            cout << "YES\n";return;
        }
        else{
            int cnt =0;
    for(int i=0; i<n; i++){
        if(s[i] == '1' && t[i] == '0')cnt++;
        if(s[i]=='0' && t[i]=='1'){
            cout << "NO\n";
            return;
        }
    }
    
    if(cnt != 0 && cnt%2 == 0)cout << "YES\n";
    else cout << "NO\n";
        }
        
    }
    
    
}

int main() {
	// your code goes here
	int t; cin >> t; 
	while(t--){
	    solve();
	}

}
