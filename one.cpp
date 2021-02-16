#include<bits/stdc++.h>
using namespace std;

int main()
{
   map<int,int> m;
   int arr[]={3, 1, 2, 2, 2, 1, 4, 3, 3 };
   int n=9;
   int k=4;

   for(int i=0;i<n;i++)
   {
	   m[arr[i]]++;
   }

   for(auto itr:m)
   {
	   if(itr.second>(n/k))
	   {
		   cout<<itr.first<<" "<<itr.second<<"\n";
	   }
   }

}