//Problem:
https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/Z
//Author: Foreda Jannat Eva

#include<bits/stdc++.h>
using namespace std;
long long binary(long long A[],long long S,long long E, long long x)
{
  if(E>=S){

      long long mid = abs((S+E)/2);
      if(A[mid]==x)
        return mid;

  else if(A[mid]>x)
    return binary(A,S,mid-1,x);
  else
   return binary(A,mid+1,E,x);
  }
  else
    return -1;
}
int main()
{
    long long N,Q;
    cin>>N>>Q;
    long long A[N],i,x;
    for(i=0;i<N;i++){
        cin>>A[i];
    }
    sort(A,A+N);
    long long S=0,E=N-1;
    for(i=1;i<=Q;i++){
        cin>>x;
       long long R= binary(A,S,E,x);
       if(R!=-1){
        cout<<"found"<<endl;
       }
       else{
        cout<<"not found"<<endl;
       }
    }
}
