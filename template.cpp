#include<bits/stdc++.h>
using namespace std;

int getRand(int l, int r){
    return l + (rand()) % (r - l);
}

int main(){
    srand(time(NULL));
    for (int i=3; i<=10; i++){
        int a=getRand(500, 100000), b=getRand(500, 100000);
        string c = "in"+to_string(i);
        string d = "out"+to_string(i);
        freopen(c.c_str(), "w" ,stdout);
        cout << a << " " << b;
        freopen(d.c_str(), "w" ,stdout);
        cout << a - b;
    }
    
}