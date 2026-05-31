#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a,b;
    cin>>a>>b;
    while(b!=0){
        int r = a%b;
        a=b;
        b=r;
    }
    cout<<a<<endl;

    return 0;
}