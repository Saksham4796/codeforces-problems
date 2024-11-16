#include<bits/stdc++.h>
using namespace std;

void transfrom(string &s){
   
   for(int i=0; i<s.length()-1; i++){
      if(s[i]=='B' && s[i+1]=='G'){
         s[i] = 'G';
         s[i+1] = 'B';
         i++;
      }
   }

}

int main(){

   int n, t;
   cin>>n>>t;

   string s;
   cin>>s;

   for(int i=1; i<=t; i++){
      transfrom(s);
   }

   cout<<s<<endl;

   return 0;

}
