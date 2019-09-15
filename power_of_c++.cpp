#include<bits/stdc++.h>
using namespace std;

__int128 input()
{
	string s;
	cin >> s;
	long long fst = (s[0] == '-') ? 1 : 0;
	__int128 v = 0;
	for(int i=0; i<s.size(); i++) 
		v = v * 10 + s[i] - '0';
	if(fst) v = -v;
	return v;
}
ostream& operator << (ostream& os,const __int128& v) 
{
	string ret, sgn;
	__int128 n = v;
	if(v < 0) sgn = "-", n = -v;
	while(n) ret.push_back(n % 10 + '0'), n /= 10;
	reverse(begin(ret),end(ret)); // using C++ free functions begin() and end()
	ret = sgn + ret;
	os << ret;
	return os;
}
int main()
{
	__int128 n = input();  // I am slow but can do big calculation for you;
	cout << n << endl;
  
    __int128 n1=input() ;
    
    cout<<n1*n<<endl;
    int a=12,b=3;
    // Don't want two container to store minimum and maximum 
    auto out = minmax(a,b);
    cout<<out.first<<" "<<out.second<<endl;
    
    // nth element in O(n) time instead of sort and then find
    vector<int> v={12,2,11,44,1,3,33};
    auto median_pos=v.begin()+v.size()/2;

    nth_element(begin(v),median_pos,end(v));
    
    cout<<v[v.size()-1]<<endl; // but original vector will change.
    
    
   // merge in O(log(n))
    
  vector<int> c1={1,2,5,5,5,6,9,12};
  vector<int> c2={2,4,4,5,7,15};
  vector<int> result;
  
  merge(begin(c1), end(c1), begin(c2), end(c2), back_inserter(result));
  for(auto it: result)cout<<it<<" ";
  cout<<endl;
  
  // msb in O(1);
  int msb(unsigned x) 
{
	union { 
		double a; int b[2]; 
	};
	a = x;
	return (b[1] >> 20) - 1023;
}
  
  
    return 0;
    
}
