#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    float a,b; cin>>a>>b;
    if(a>0 && b>0){
        cout<<"Q1";
    }
    else if(a<0 && b>0){
        cout<<"Q2";
    }
    else if(a<0 && b<0){
        cout<<"Q3";
    }
    else if(a>0 && b<0){
        cout<<"Q4";
    }
    return 0;
}