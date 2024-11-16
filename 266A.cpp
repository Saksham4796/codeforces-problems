#include<bits/stdc++.h>
using namespace std;

int main(){

   int n;
   cin>>n;

   string s;
   cin>>s;

   stack<char> st;
   st.push(s[0]);

   for(int i=1; i<n; i++){
      if(s[i]!=st.top())st.push(s[i]);
   }

   int ans = n-st.size();
   cout<<ans<<endl;

   return 0;

}
