#include <bits/stdc++.h>
using namespace std;

 int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
   int n;cin>>n;
    string answer;
    if(n<=1){
        cout<<"NO"<<endl;
    }
    for (int i = 2; i <= sqrt(n); i++)
    {
        if(n%i == 0){
            answer = "NO";
        }
        else {
            answer = "YES";
        }
    }
    cout<<answer<<endl;
    return 0;
}


