// #include<iostream>
// using namespace std;

// int main() {

//     int arr[5] = {1, 3, 4, 2, 0};
//     for (int i=0; i<6; i++) {
//         int temp1 = arr[i];
//         arr[temp1] = i;   
//     }

//     for(int i=0; i<6; i++) {
//         cout << arr[i] << " ";
//     }
    

//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;

void fibo(int a, int b, int n) {
    if(a + b > n) {
        return;
    }
    cout << a + b << " ";
    fibo(b, a+b, n);
}

void even(int a, int b) {
    if(a > b) {
        return;
    }
    if(a%2==0) {
        cout << a << " ";
    }
    a++;
    even(a, b);
}

string palindrome(int num) {
    string str = to_string(num);
    int it;
    for (int i=0; i<str.length()/2; i++) {
        it = str.length() + i - 1;
        swap(str[i], str[it]);
    }
    int rnum = stoi(str);

    if(num == rnum) {
        cout << "it is palindrome.";
    }
    else {
        num = num - rnum;
        if(num < 10) return "Not palindrome.";
        palindrome(num);
    }
}


void sub(int num, int rnum) {
}


int main()
{
    // fibo(0, 1, 100);
    // cout << endl;
    // even (1,10);
    int num;
    cout << "enter num : ";
    cin >> num;
    palindrome(num);
    

    return 0;
}

    // string s;
    // string ns;

    // cin >> s;

    // int count = 0;
    // for(int i=0; i<s.size(); i++) {
    //     while(s[i] == s[i+1]) {
    //         count++;
    //     }
    //     ns += s[i];
    //     if(count > 0) {
    //         ns += count;
    //     }
    // }
    // for (int i=0; i<ns.size(); i++) {
    //     cout << ns[i];
    // }