#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a;cin>>a;
   while(a >=10){
    a/=10;
   }
   if(a%2 == 0){
    cout<<"EVEN"<<endl;
   }
   else{
    cout<<"ODD"<<endl;
   }

    return 0;
}