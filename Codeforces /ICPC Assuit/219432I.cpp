#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, rev = 0, digit = 0;
    int original,count = 0, realNVal;
    cin>>n;
    original = n;
     realNVal = n;
    while(original > 0){
        original/=10;
        count++;
    }
    for (int i = 0; i < count; i++)
    {
        digit = n%10;
        n/=10;
        rev = rev*10+digit;
    }
    cout<<rev<<endl;
    if (rev == realNVal){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    
    return 0;
}