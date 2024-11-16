#include<bits/stdc++.h>
using namespace std;

int partition(vector<int>& v, int low, int high){
   int pivot = v[high];
   int i = low - 1;
   for(int j = low; j<high; j++){
      if(v[j]<=pivot){
         i++;
         swap(v[i], v[j]);
      }
   }
   swap(v[i+1], v[high]);
   return i+1;
}

void quicksort(vector<int>& v, int low, int high){
   if(low < high){
      int p = partition(v, low, high);

      quicksort(v, low, p-1);
      quicksort(v, p+1, high);
   }
}

int main(){
   vector<int> v = {12, 35, 62, -31, 54, 43};
   int n = v.size();

   quicksort(v, 0, n-1);

   for(auto x: v)cout<<x<<" ";
   return 0;
}