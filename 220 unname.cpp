#include<iostream>
using namespace std;
bool solve(string s){
bool f = true;
if(s[0] == '0' && s[1] == '.'){
    for(int i = 2; i<s.size(); i++){
        if(s[i]>='1' && s[i]<= '9')
            continue;
        else f = false;
    }
    if(f) return true;
    else return false;
}

}
bool solve_2(string s){
    int cnt = 0;
     bool f = true;
for(int i =0 ; i< s.size(); i++){
    if(s[i]>='1' && s[i]<= '9')
        continue;
    else if(s[i] == '.') cnt++;
    else return false;

}
if(cnt!=1) return false;
else return true;

}
int main(){

string s; cin>>s;
bool l = true,r = true;
if(s[0] == '0')
    l = solve(s);
else r = solve_2(s);
//else r = false;

if(l&&r) cout<<"Valid float"<<endl;
else cout<<"Invalid float"<<endl;


return 0;
}
