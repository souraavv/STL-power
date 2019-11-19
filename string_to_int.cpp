#include<bits/stdc++.h>
using namespace std;

int to_int(string s){
   int n = s.size();
   reverse(all(s));
   int c  =1;
   int res = 0;
   for(int i=0;i<n;i++){
      res += ((s[i]-'0')*c);
      c = c*10;
   }
   return res;
}
