#include<bits/stdc++.h>
using namespace std;

void merge(vector<int>& v, int low, int mid, int high){
   int n1 = mid - low + 1;
   int n2 = high - mid;

   vector<int> left(n1);
   vector<int> right(n2);

   for(int i = 0; i<n1; i++)left[i] = v[i+low];
   for(int i = 0; i<n2; i++)right[i] = v[i+mid+1];

   int i = 0, j = 0, k = low;
   while(i<n1 && j<n2){
      if(left[i] <= right[j]){
         v[k++] = left[i++];
      }
      else {
         v[k++] = right[j++];
      }
   }

   while(i < n1)v[k++] = left[i++];
   while(j < n2)v[k++] = right[j++];
}

void mergesort(vector<int>& v, int low, int high){
   if(low < high){
      int mid = (low+high)/2;

      mergesort(v, low, mid);
      mergesort(v, mid+1, high);
      merge(v, low, mid, high);
   }
}

int main(){
   vector<int> v = {14, 43, 23, 54, -53, 92, 0};
   int n = v.size();

   mergesort(v, 0, n-1);

   for(auto x: v)cout<<x<<" ";

   return 0;
}
   