#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
   cin.tie(nullptr);
   double n;cin>>n;
   int integerPart = (int)n;
   if(n == integerPart){
    cout<< "int "<<integerPart;
   }
   else{
    cout<<"float "<<integerPart<<" "<<n-integerPart;
   }
    return 0;
}