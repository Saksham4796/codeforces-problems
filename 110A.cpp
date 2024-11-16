#include<bits/stdc++.h>
using namespace std;

int main(){

   int n, r;
   int ans = 0;

   cin>>n;

   while(n>0){
      r = n%10;
      if(r==4||r==7)ans++;
      n = n/10;
   }
   
   bool flag = true;
   if(ans == 0) flag = false;

   while(ans>0){
      r = ans%10;
      if(!(r==4||r==7)){
         flag = false;
         break;
      }
      ans = ans/10;
   }

   if(flag)cout<<"YES"<<endl;
   else cout<<"NO"<<endl;

   return 0;

}
