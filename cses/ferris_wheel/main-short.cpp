#include <bits/stdc++.h>
using namespace std;int p[1<<20],n,x,b,e,s,i;int main(){cin>>n>>x;for(i=n;i;)cin>>p[--i];sort(p,p+n);for(e=n-1;b<=e;--e,++s)if(p[b]+p[e]<=x)++b;cout<<s;}