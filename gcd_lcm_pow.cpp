#include<bits/stdc++.h>
using namespace std;

long long int newpow(long long int a,long long int n){
    long long int res=1;
    while(n>0){
        if(n&1)res*=a;
        a*=a;
        n>>=1;
    }
    return res;
}

long long int gcd(long long int a,long long int b){
   return b ? gcd(b,a%b) : a;
}
// Formal Proof
// gcd(a,b)  =gcd(b,a%b);
// let d=gcd(a,b)  d|a and d|b;
// lets represents the remainder of a/b;
// a mod b= a- b.floor(a/b);   
// d| a mod b
// d| b and d| a mod b;
// gcd(b,a%b);


// lcm(a,b) --- a.b/gcd(a,b);

long long lcm(long long a,long long b){
    return a/gcd(a,b) *b;
}

long long int gcd_iterative(long long int a,long long int b){
    while(b>0){
        a%=b;
        swap(a,b);
    }
    return a;
}
int main(){
    cout<<newpow(4,4); 
}
