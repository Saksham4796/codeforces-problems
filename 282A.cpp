#include<bits/stdc++.h>
using namespace std;

int main(){

   int n;
   cin>>n;

   int x = 0;

   vector<string> v(n);

   for(int i=0; i<n; i++){
      cin>>v[i];
   }

   for(int i=0; i<n; i++){
      if(v[i][1]=='+')x++;
      else x--;
   }

   cout<<x<<endl;

   return 0;

}