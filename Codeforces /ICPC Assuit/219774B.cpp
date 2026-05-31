#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,x;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cin>>x;
    int answer = -1;
    for (int i = 0; i < n; i++)
    {
        if(arr[i] == x){
            answer = i;
            break;
        }
    }
    
    cout<<answer<<endl;
    return 0;
}