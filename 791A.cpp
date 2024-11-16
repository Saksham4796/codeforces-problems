#include<bits/stdc++.h>
using namespace std;

int main(){

   int a, b;
   cin>>a>>b;

   int years = 0;
   do{
      a = a*3;
      b = b*2;
      years++;
   }
   while(a<=b);

   cout<<years<<endl;

   return 0;

}
