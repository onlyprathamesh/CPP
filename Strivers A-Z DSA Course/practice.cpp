#include<bits/stdc++.h>
using namespace std;

int vectors() {
    vector<int> v;
    v.push_back(1);
    v.emplace_back(234);
    cout << v[0] << " " << v[1] <<"\n";
}

void palindrome(){
    string s;
    cout << "enter string : ";
    cin >> s;
    string p = s;

    reverse(p.begin(), p.end());
    

    if ( s == p) {
        cout << "yes";
    }
    else cout << "no";

    
}

int main() {
    // vectors();
    // cout << "Hello world";
    palindrome();
    return 0;
}