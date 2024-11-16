#include<bits/stdc++.h>
using namespace std;

int main(){

   int k, n, w;
   cin>>k>>n>>w;

   int sum = 0;

   for(int i=1; i<=w; i++){
      sum += i*k;
   }

   int b = sum - n;

   if(b>0)cout<<b<<endl;
   else cout<<0<<endl;

   return 0;

}
