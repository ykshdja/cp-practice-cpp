#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int age;cin>>age;
    int years = age/365;
    age = age%365;
    int months = age/30;
    age = age%30;
    int days = age;
    cout << years << " years\n";
    cout << months << " months\n";
    cout << days << " days\n";
    return 0;
}