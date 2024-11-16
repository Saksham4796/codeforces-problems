#include<bits/stdc++.h>
using namespace std;

int main(){

   int x;
   cin>>x;

   int ans = 0;

   for(int i=5; i>=1; i--){
      int r = x%i;
      int d = x/i;
      ans += d;
      x = r;
   }

   cout<<ans<<endl;

   return 0;

}
