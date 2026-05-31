#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int N,M;
    cin>>N>>M;
    int lastDigitN = N%10;
    int lastDigitM = M%10;
    cout << lastDigitM + lastDigitN << endl;
    return 0;
}