#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string f1,s1,f2,s2;
    cin>>f1>>s1;
    cin>>f2>>s2;
    if(s2 == s1){
        cout<<"ARE Brothers"<<endl;
    }
    else{
        cout<<"NOT"<<endl;
    }

    return 0;
}