#include<bits/stdc++.h>
using namespace std;

int main(){

   string s;
   cin>>s;

   int u = 0, l = 0;
   for(auto x: s){
      if(islower(x))l++;
      else u++;
   }

   if(l>=u){
      for(int i=0; i<s.length(); i++){
         s[i] = tolower(s[i]);
      }
   }
   else{
      for(int i=0; i<s.length(); i++){
         s[i] = toupper(s[i]);
      }
   }
   
   cout<<s<<endl;

   return 0;

}
