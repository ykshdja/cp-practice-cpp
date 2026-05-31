#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n,q; cin >>n>>q;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    while(q--){
        int x; cin >> x;
        if(binary_search(arr,arr+n,x)){
               cout<<"found"<<endl;
        }
        else{
            cout<<"not found"<<endl;
        }

    }

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}