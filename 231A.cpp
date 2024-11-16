#include<bits/stdc++.h>
using namespace std;

int main(){
   int n;
   cin>>n;
   int count = 0;

   vector<vector<int>> v(n, vector<int>(3));

   for(int i=0; i<n; i++){
      cin>>v[i][0]>>v[i][1]>>v[i][2];
   }

   for(auto x: v){
      if(x[0]+x[1]+x[2]>=2)count++;
   }

   cout<<count<<endl;

   return 0;

}