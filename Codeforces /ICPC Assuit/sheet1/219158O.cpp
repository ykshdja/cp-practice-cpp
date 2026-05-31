#include<bits/stdc++.h>
#include<iostream>
#include<string>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string expr;
    cin>>expr;
    int operationPos;
    for (int i = 0; i < expr.size(); i++)
    {
        if(expr[i] == '+' || expr[i] == '-' || expr[i] == '*' || expr[i] == '/'){
            operationPos = i;
            break;
        }
    }
    int a = stoi(expr.substr(0,operationPos));
    int b = stoi(expr.substr(operationPos+1));
    char op = expr[operationPos];
    if(op == '+') cout<<a+b;
    else if (op == '-') cout<<a-b;
    else if (op == '*') cout<<a*b;
    else if (op == '/') cout<<a/b;
    return 0;
}