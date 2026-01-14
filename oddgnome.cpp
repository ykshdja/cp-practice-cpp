/**
 * 1. Exactly one king in the group
 * 2. Gnomes are in Strictly increasing order.
 * 3. King is out of order.
 * 4. King is not the first or last.
 * 
 */
/**
 * - Check Increasing Order in a Linear Pass
 * -  
 */


#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;cin>>t;
    while(t--){
        int g;
        cin>>g;
        vector<int>gnome(g);
        for (int i = 0; i < g; i++)
        {
            cin>>gnome[i];
        }
        for (int  i = 1; i < g; ++i)
        {
            if(gnome[i] != gnome [i-1]+1){
                cout<<i+1<<endl;
                break;
            }
        }
        
        
    }
    
    

    return 0;
}