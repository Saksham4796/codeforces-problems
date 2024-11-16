#include<bits/stdc++.h>
using namespace std;

int main(){

   string s;
   cin>>s;

   unordered_map<char, int> m;
   m[1] = m[2] = m[3] = 0;

   for(auto x: s){
      if(x=='+')continue;
      else m[x-'0']++;
   }

   string ans = "";

   for(int i=1; i<=3; i++){
      for(int j=1; j<=m[i]; j++){
         ans = ans + to_string(i)+"+";
      }
   }

   ans.pop_back();

   cout<<ans<<endl;

   return 0;

}
