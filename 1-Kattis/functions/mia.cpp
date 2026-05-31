/**
 * To combine Digits -  I did this before.
 * number = x*10k+y
 * Example => abc = a*100 + b*10 + c.
 * 
 */
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a,b,c,d;
    while(cin >>a>>b>>c>>d){
        if(a==0 && b == 0 && c == 0 && d == 0){
            break;
        }
        //Normalize Dice
        int a1 = max(a,b),b1 = min(a,b);
        int c1 = max(c,d),d1 = min(c,d);
        int ab = a1*10+b1;
        int cd =c1*10+d1;
        //Mia Check
        if(ab == 21 && cd == 21){
            cout<<"Tie.\n";
        }
        else if(ab == 21 ){
            cout<<"Player 1 wins.\n";
        }
        else if (cd == 21 ){
            cout<<"Player 2 wins.\n";
        }
        //Doubles Check 
        else if(a1 == b1 && c1 == d1){
            if(a1>c1){
                cout<<"Player 1 wins.\n";
            }
            else if(c1>a1){
                cout<<"Player 2 wins.\n";
            }
            else{
                cout<<"Tie.\n";
            }
        }
        else if(a1 == b1){
            cout<<"Player 1 wins.\n";
        }
        else if (c1 == d1){
            cout<<"Player 2 wins.\n";
        }
        //Normal Numberss
        else{
            if(ab>cd){
                cout<<"Player 1 wins.\n";
            }
            else if(cd>ab){
                cout<<"Player 2 wins.\n";
            }
            else{
                cout<<"Tie.\n";
            }
        }
    }
                
    return 0;
}