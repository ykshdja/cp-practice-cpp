/***
 * 
 */

 #include <bits/stdc++.h>
 using namespace std;

int score (int x, int y){
   int a = max(x,y);
   int b = min(x,y);
   //Mia (Highest)
   if(a == 2 && b == 1){
      return 1000;

   }
   //Doubles (Next Highest)
   if(a == b){
      return 500+a;
   }

   //Normal Number 
   return a*10+b;

}

 int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
   int a,b,c,d;
   while(cin>>a>>b>>c>>d){
      if(a==0 && b==0 &&c == 0 &d == 0){
         break;
      }
      int s1 = score(a,b);
      int s2 = score(c,d);

      if(s1>s2){
         cout<<"Player 1 wins.\n";
      }
      else if (s2>s1){
         cout<<"Player 2 wins.\n";
      }
      else{
         cout<<"Tie.\n";
      }
   }
    
 
    return 0;
 }