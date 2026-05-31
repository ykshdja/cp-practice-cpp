#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
   int N,a,b;
   int ans = 0;
   cin>>N>>a>>b;
   for (int i = 0; i <= N; i++)
   {
     int temp = i; //original value of i should be preserved.
     int sum = 0;
     while(temp>0){
        sum+=temp%10;
        temp/=10;
     }
     if(sum >= a && sum <= b){
        ans+=i;
     }
   }
   cout<<ans;
   
    return 0;
}