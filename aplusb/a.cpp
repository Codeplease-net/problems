#include<bits/stdc++.h>
using namespace std;
int main(){

    for (int i=3; i<=10; i++){
        int a=i, b=i+123;
        string c = "in"+to_string(i);
        string d = "out"+to_string(i);
        freopen(c.c_str(), "w" ,stdout);
        cout << a << " " << b;
        freopen(d.c_str(), "w" ,stdout);
        cout << a+b;
    }
    
}