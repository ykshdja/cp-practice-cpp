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
    int N,M;cin>>N>>M;
    vector<string>grid(N);
    for (int i = 0; i < N; i++) {
        cin>>grid[i];
    }
    int X,Y;
    cin>>X>>Y;
    //convert to 0th Index
    X--;
    Y--;
    bool ok = true;
    int dx[] = {-1,-1,-1,0,0,0,1,1,1};
    int dy[] = {-1,0,1,-1,1,-1,0,1};
    
    for (int i = 0; i < 8; i++) {
        int nx = X+dx[i];
        int ny = Y+dy[i];
        if(nx>=0 && nx < N && ny >=0 && ny <M){
            if(grid[nx][ny] != 'x'){
                ok = false;
            }
        }
    }
    if(ok){
        cout<<"yes\n";
    }else{
        cout<<"no\n";
    }
    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}