#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int k,s;
    cin>>k>>s;
    int count=0;
    for (int x = 0; x <=s ; x++)   {
        int left = max(0,s-x-k);
        int right = min(k,s-x);

    }
    cout<<count<<endl;
    return 0;
}