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
    ll N,M;cin>>N>>M;
    int A[N],B[M];
    for (int i = 0; i < N; i++) {
        cin>>A[i];
    }
    for (int j = 0; j < M; j++) {
        cin>>B[j];
    }
    int n = sizeof(A) / sizeof(A[0]);
    int m = sizeof(B) / sizeof(B[0]);
    int j = 0;
    for (int i = 0; i < N; i++) {
        if(A[i] == B[j]){
            j++;
        }
        if(j == m){
            break;
        }
    }
    if(j == m){
        cout<<"YES"<<endl;//ßß
    }
    else{
        cout<<"NO"<<endl;
    }

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
    return 0;
}