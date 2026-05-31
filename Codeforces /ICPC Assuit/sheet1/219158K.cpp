#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a,b,c;cin>>a>>b>>c;
    int min = a;
    int max = a;
    if(b<min){
        min = b;
    }
    if(c<min){
        min = c;
    }
    if(b>max){
        max = b;
    }
    if(c>max){
        max = c;
    }
    cout<<min <<" "<<max<<endl;
    return 0;
}