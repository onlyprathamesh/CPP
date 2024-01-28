#include<bits/stdc++.h>
using namespace std;

int count_digits(int n) {
    // Time Complexity of both is O(log10(n))
    // One way
    int cnt = 0;
    while (n > 0) {
        cnt++;
        n = n / 10;
    }
    return cnt;

    // Another way
    int cnt2 = (int) (log10(n) + 1);
    return cnt2;
}

bool palindrome(int n)
{
    // Write your code here to check if it is palindrome or not
    int dup = n;
    int rev = 0;
    while(n > 0) {
        int ln = n % 10;
        rev = (rev * 10) + ln;
        n = n / 10;
    }
    if (rev == dup) return true;
    return false;
}

int reverse_number(int n) {
    string binary = "";
    while(n > 0) {
        int rem = n % 2;
        binary += to_string(rem);
        n = n / 2;
    }
    int len = binary.length();

    for (int i=binary.length(); i<32; i++) {
        binary += "0";
    }
    
    int decimal = 0;
    int power = 1;
    for (int i = binary.length() - 1; i >= 0; i--) {
        if (binary[i] == '1') {
            decimal += power;
        }
        power *= 2;
    }

    cout << decimal << endl;

}

int main() {
    int testcases;  cout << "testcases : ";
    cin >> testcases;
    int n[100];
    for(int i=0; i<testcases; i++) {
        cin >> n[i];
        // cout << count_digits(n);
        // palindrome(n);
    }
    for (int i=0; i<testcases; i++) {
        reverse_number(n[i]);
    }
}