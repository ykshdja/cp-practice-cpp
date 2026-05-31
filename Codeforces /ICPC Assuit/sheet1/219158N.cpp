#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    char ch;
    char alphabet;
    cin>>ch;
    int ascii = (int)ch;
    if(ascii>=65 && ascii <=90){
        ascii = ascii+32;  
         alphabet = (char)ascii;
    }
    else if (ascii>=97 && ascii <=122){
        ascii = ascii - 32;
        alphabet = (char)ascii;
    }
    cout<<alphabet<<endl;
    return 0;
}