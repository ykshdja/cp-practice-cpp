#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    char ch;
    cin>>ch;
    int c = (int)ch;
    if(c >= 48 && c<= 57){
        cout<<"IS DIGIT\n";
    }
    else if (c >= 65 && c <= 90){
        cout<<"ALPHA"<<endl;
        cout<<"IS CAPITAL"<<endl;
    }
    else if (c >= 97 && c <= 122){
        cout << "ALPHA"<<endl;
        cout<< "IS SMALL"<<endl;
    }
    return 0;
}