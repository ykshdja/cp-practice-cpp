/**
 * 
 */




#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a,b,c,n;
    cin>>a>>b>>c>>n;
    if(a < 1 || b < 1 || c < 1) {
    cout << "NO" << endl;
    }
    else if((a+b+c)<n){
        cout<<"NO"<<endl;
    }  
    else if(n<3){
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
    }
    

    return 0;
}