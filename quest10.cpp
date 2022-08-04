#include<bits/stdc++.h>
using namespace std;
int main(){
    unordered_map<char,int> mp;
    string k;
    cout<<"Enter a string:";
    getline(cin,k);
    for(int i=0;i<k.size();i++){
        mp[k[i]]++;
    }
    cout<<"\n";
    cout<<"The frequency of characters are:";
    for(int i=0;k[i];i++){
        cout<<k[i]<<" "<<mp[k[i]]<<"\n";
    }
    return 0;
}