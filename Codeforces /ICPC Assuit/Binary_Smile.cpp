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
    int t;cin>>t;while(t--){
        int n;cin>>n;
        string a,b;cin>>a>>b;
        vi pos_a,pos_b;
        for (int i = 0; i < n; i++) {
            if(a[i] == '1') pos_a.push_back(i);
            if(b[i] == '1') pos_b.push_back(i);
        }
        if(pos_a.size()!=pos_b.size()){
            cout<<"-1\n";
            continue;
        }
        int ops = 0;
        for (int i = 0; i < pos_a.size(); i++) {
            if(pos_a[i]!=pos_b[i]){
                ops++;
            }
        }
        cout<<ops<<"\n";
    }
   
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}