#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n;
    cin>>n;
    if(n>2 && n%2 == 0){
        cout << "YES"  << "\n";
        
    }
    else{
        cout << "NO"  << "\n";
        
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;

    while (t--) {
        solve();
    }

    return 0;
}