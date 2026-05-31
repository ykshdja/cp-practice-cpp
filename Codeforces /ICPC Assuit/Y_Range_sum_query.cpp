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
    ll N,Q;
    cin>>N>>Q;
    vll v(N+1);
    vll prefix(N+1,0);
    for (int i = 1; i <=N; i++) {
        cin >> v[i];
        prefix[i] = prefix[i-1]+v[i];
    }
    while(Q--){
        int L,R;
        cin>>L>>R;
        ll sum = prefix[R] - prefix[L-1];
        cout<<sum<<"\n";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}