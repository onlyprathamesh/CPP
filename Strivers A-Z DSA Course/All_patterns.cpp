
#include<bits/stdc++.h>
using namespace std;

void pattern1(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << "* ";
        }
        cout << endl;
    }
}
void pattern2(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }
}
void pattern3(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << j << " ";
        }
        cout << endl;
    }
}
void pattern4(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << i << " ";
        }
        cout << endl;
    }
}
void pattern5(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = i; j <= n; j++) {
            cout << "* ";
        }
        cout << endl;
    }
}
void pattern6(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n-i+1; j++){
            cout << j << " ";
        }
        cout << endl;
    }
}
void pattern7(int n) {
    for (int i = 0; i < n; i++) {
        for (int j=0; j<n-i-1; j++) {
            cout << " ";
        }
        for (int j=0; j<2*i+1; j++) {
            cout << "*";
        }
        // for (int j=0; j<n-i-1; j++) {

        //     cout << " ";
        // }
        cout << endl;
    }
}
void pattern8(int n) {
    for (int i = 0; i < n; i++) {
        for (int j=0; j<i; j++) {
            cout << "-";
        }
        for (int j=0; j<2*n-(2*i+1); j++) {
            cout << "*";
        }
        for (int j=0; j<i; j++) {

            cout << "-";
        }
        cout << endl;
    }
}
void pattern9(int n) {
    for (int i = 0; i < n; i++) {
        for (int j=0; j<n-i-1; j++) {
            cout << " ";
        }
        for (int j=0; j<2*i+1; j++) {
            cout << "*";
        }
        for (int j=0; j<n-i-1; j++) {

            cout << " ";
        }
        cout << endl;
    }
    for (int i = 0; i < n; i++) {
        for (int j=0; j<i; j++) {
            cout << " ";
        }
        for (int j=0; j<2*n-(2*i+1); j++) {
            cout << "*";
        }
        for (int j=0; j<i; j++) {

            cout << " ";
        }
        cout << endl;
    }
}
void pattern10(int n) {
    for (int i=1; i<=2*n-1;i++) {
        int stars = i;
        if (i > n) stars = 2*n-i;
        for (int j=0; j<stars; j++) {
            cout << "*";
        }
        cout << endl;
    }
}
void pattern11(int n) {
    int start = 1;
    for (int i=0; i<n;i++) {
        if (i % 2 == 0) start = 1;
        else start = 0;
        for (int j=0; j<=i; j++) {
            cout << start << " ";
            start = 1 - start;    
        }
        cout << endl;
    }
}
void pattern12(int n) {
    for (int i=1; i<=n;i++) {
        for (int j=1; j<=i; j++) {
            cout << j << " ";
        }
        for (int j=1; j<=(2*n)-(2*i); j++) {
            cout << " ";
        }
        for (int j=i; j>=1; j--) {
            cout << j << " ";
        }
        cout << endl;
    }
}
void pattern13(int n) {
    int start = 1;
    for (int i=1; i<=n;i++) {
        for (int j=1; j<=i; j++) {
            cout << start << " ";
            start = start + 1;
        }
        cout << endl;
    }
}
void pattern14(int n) {
    // string array[27] = {"A","B","C","D","E","F","G","H","I","J","K","L","M","N","O","P","Q","R","S","T","U","V","W","X","Y","Z"};
    // for (int i=0; i<n;i++) {
    //     for (int j=0; j<=i; j++) {
    //         cout << array[j];
    //     }
    //     cout << endl;
    // }
    for (int i=0; i<n; i++) {
        for (char ch = 'A'; ch<='A'+i; ch++) {
            cout << ch << " ";
        }
    cout << endl;
    }
}
void pattern15(int n) {
    
    for (int i=n; i>0; i--) {
        for (char ch = 'A'; ch<='A'+i-1; ch++) {
            cout << ch << " ";
        }
    cout << endl;
    }
}
void pattern16(int n) {
    char ch = 'A';
    for (int i=1; i<=n; i++) {
        for (int j=1; j<=i; j++) {
            cout << ch << " ";
        }
        ch = ch + 1;
    cout << endl;
    }
}
void pattern17(int n) {
    for (int i=1; i<=n; i++) {
        char start = 'A';
        for (int j=i;j<n; j++) {
            cout << " ";
        }
        for (int j=1; j<=i*2-1; j++) {
            cout << start;
            if (j<i) start = start + 1;
            else start = start - 1;

        }
        
        cout << endl;
    }
}
void pattern18(int n) {
    for (int i=0; i<n; i++)
    {
        char ch = 'A'+n-1;
        char print = ch;
        for (int j=0; j<=i; j++)
        {
            cout << print;
            print = print - 1;
        }
        cout << endl;
    }
}
void pattern19(int n) {
    for (int i=0; i<n; i++){
        for (int j=i; j<n; j++){
            cout << "*";
        }
        for (int j=0; j<i; j++){
            cout << "  ";
        }
        for (int j=i; j<n; j++){
            cout << "*";
        }
        cout << endl;
    }
    for (int i=0; i<n; i++) {
        for (int j=0; j<=i; j++) {
            cout << "*";
        }
        for (int j=i; j<n-1; j++) {
            cout << "  ";
        }
        for (int j=0; j<=i; j++) {
            cout << "*";
        }
        cout << endl;
    }
}
void pattern20(int n) {
    for (int i=0; i<n-1; i++) {
        for (int j=0; j<=i; j++) {
            cout << "*";
        }
        for (int j=i; j<n-1; j++) {
            cout << "  ";
        }
        for (int j=0; j<=i; j++) {
            cout << "*";
        }
        cout << endl;
    }
    for (int i=0; i<n; i++){
        for (int j=i; j<n; j++){
            cout << "*";
        }
        for (int j=0; j<i; j++){
            cout << "  ";
        }
        for (int j=i; j<n; j++){
            cout << "*";
        }
        cout << endl;
    }
}
void pattern21(int n) {
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            if(i == 0 || j == 0 || i == n-1 || j == n-1) {
                cout << "*";
            }
            else cout << " ";
        }
        cout << endl;
    }
}
void pattern22(int n) {
    for (int i=0; i<2*n-1; i++) {
        for (int j=0; j<2*n-1; j++) {
            int top = i;
            int left = j;
            int right = (2*n-2)-j;
            int down = (2*n - 2) - i;
            cout << (n-min(min(top,down), min(left,right)));
        }
        cout << endl;
    }
}
int main(){
    /*  Code for Test case's
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        int n;
        cin >> n;
    }*/
    
    // Change the pattern number from 1-22 acordingly.
    pattern1(t);

	return 0;
}