#include <bits/stdc++.h>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <cstring>
#include <chrono>
#include <complex>
#define endl "\n"
#define ll long long int
#define vi vector<int>
#define vll vector<ll>
#define vvi vector < vi >
#define pii pair<int,int>
#define pll pair<long long, long long>
#define mod 1000000007
#define inf 1000000000000000001;
#define all(c) c.begin(),c.end()
#define mp(x,y) make_pair(x,y)
#define mem(a,val) memset(a,val,sizeof(a))
#define eb emplace_back
#define f first
#define s second

using namespace std;


void solve() {
    int T;cin>>T;
    while(T--){
         string s;
    cin >> s;
    bool good = false;
    for (int i = 0; i + 2 < s.length(); i++) {
        if (s[i] == '0' && s[i+1] == '1' && s[i+2] == '0') {
            good = true;
            break;
        }
        if (s[i] == '1' && s[i+1] == '0' && s[i+2] == '1') {
            good = true;
            break;
        }
    }
    
    cout << (good ? "Good" : "Bad") << '\n';
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}