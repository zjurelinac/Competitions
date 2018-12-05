#include <bits/stdc++.h>
using namespace std;main(){int n,t;cin>>n;multiset<int>s;while(n--){cin>>t;auto i=s.upper_bound(t);if(i!=end(s))s.erase(i);s.insert(t);}cout<<s.size();}