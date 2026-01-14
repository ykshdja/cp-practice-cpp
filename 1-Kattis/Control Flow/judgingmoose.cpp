/**
 * Left  == Right 
 * Moose have even Tines 
 * 
 */


 #include <bits/stdc++.h>
 using namespace std;
 
 int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int x,y;
    cin>>x>>y;
    if(x==y){
        if(x==0){
            cout<<"Not a Moose"<<endl;
        }
        else{
            cout<<"Even "<<x*2<<endl;
        }
    }
    else{
        cout<<"Odd "<<max(x,y)*2<<endl;
    }
 
    
 
    return 0;
 }

