#include<bits/stdc++.h>
using namespace std;

int main(){

   vector<vector<int>> v(5, vector<int>(5));

   for(int i=0; i<5; i++){
      cin>>v[i][0]>>v[i][1]>>v[i][2]>>v[i][3]>>v[i][4];
   }

   int r, c;

   for(int i=0; i<5; i++){
      for(int j=0; j<5; j++){
         if(v[i][j]==1){
            r = i;
            c = j;
         }
      }
   }

   int ans = abs(r-2)+abs(c-2);

   cout<<ans<<endl;

   return 0;

}