/*Given an array of positive integers. Find the length of the longest sub-sequence such that elements in the subsequence are consecutive integers, the consecutive numbers can be in any order.
 

Example 1:

Input:
N = 7
a[] = {2,6,1,9,4,5,3}
Output:
6*/

#include<bits/stdc++.h>
using namespace std;


 
class Solution{
  public:
    
    int findLongestConseqSubseq(int arr[], int n)
    {
    
      int count = 1, res = 1;
      set<int> s(arr,arr+n);
      vector<int> v(s.begin(),s.end());
      for(int i = 0; i < v.size();i++){
          if(v[i]==v[i+1]-1)
           count++;
          else
           count = 1;
          res = max(res,count); 
      }
      return res;
    }
};


int main()
{
 int  t,n,i,a[100001];
 cin>>t;
 while(t--)
 {
  cin>>n;
  for(i=0;i<n;i++)
  cin>>a[i];
  Solution obj;
  cout<<obj.findLongestConseqSubseq(a, n)<<endl;
 }
      
    return 0;
}  
