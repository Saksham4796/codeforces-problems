#include<bits/stdc++.h>
using namespace std;

int main(){
   int n;
   cin>>n;

   vector<string> v(n);

   for(int i=0; i<n; i++){
      cin>>v[i];
   }

   for(int i=0; i<v.size(); i++){
      if(v[i].length()<=10)cout<<v[i]<<endl;

      else{
         int l = v[i].length();
         string ans = v[i][0]+to_string(l-2)+v[i][l-1];
         cout<<ans<<endl;
     }
   }

   return 0;

}