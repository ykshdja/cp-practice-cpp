/**
 * 
 * PATTERN - MAXIMUM K SUCH THAT SUM (1..K) <= N
 * WHEN YOU SEE - 
 * 1+2+3+4+5 ... K
 * STAIRS
 * ROWS
 * LEVELS 
 * COINS ARRANGED IN ROWS 
 *      ---- FORMULA TO THINK OF - K(K+1)/2 < N --- 
 * 
 *      k^2+k <= 2n
 *      k^2+k-2n = 0
 *      k = -1+Sqrt(1+8n)/2
 *  k - Positive root and a Negative Root
 * 
 *   CONSTRAINTS - 0<N<10^18
 *  FOR N = 10, K = 4 ACCORDING TO THE FORMULA 
 * 
 * 
 */

/**         W
 *          W W
 *          W W W
 *          W W W W
 * 
 * Input - 11 -> 4
 *         12 -> 4
 *         16 -> 5
 *
 */






#include <bits/stdc++.h>
using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        long long k = (sqrt(1+8.0*n)-1)/2;
        cout<<k<<'\n';
    }
    
    return 0;
}

