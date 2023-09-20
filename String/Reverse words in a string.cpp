#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    // Write C++ code here
    string s="i lonvyug jwbfugu dnifcbfweueg";
    vector<string> a;
    string str=" ";
    for(int i=0;i<s.length();i++){
        
        if(s[i]==' '){
            a.push_back(str);
            str=" ";
        }
        else
        str=str+s[i];
    }
    a.push_back(str);
    for(int i=a.size()-1;i>=0;i--){
        cout<<a[i];
    }
    

    return 0;
}
