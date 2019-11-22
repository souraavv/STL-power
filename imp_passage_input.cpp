#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    cin.ignore();
    while(t--){
        string s;
        getline(cin,s);
        s=' '+s+' ';
        string p=" not ";
        if(s.find(p)!=string::npos)cout<<"Real Fancy\n";
        else cout<<"regularly fancy\n";
    }
    
    return 0;
}
