#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
   int n;
   cin>>n;
   for(int i = 2;i<=n;i++){
    bool prime = true;
    for (int j = 2; j<= sqrt(n); j++)
    {
        if(i%j == 0)
        {
            prime = false;
            break;
        }
    }
    if(prime){
        cout<<i<<" ";
    }
   }
    
    return 0;
}