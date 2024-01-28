#include<bits/stdc++.h>
using namespace std;

void bubble_sort() {
    int arr[9] = {1,5,3,6,8,9,7,2,4};
    int n = 9;
    for (int i=0; i<n-1; i++) {
        for (int j=0; j<n-i-1; j++) {
            if(arr[j] > arr[j+1]) {
                swap(arr[j], arr[j+1]);
            }
        }
    }
    for(int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }
}

void insertion_sort() {
    int arr[9] = {1,5,3,6,8,9,7,2,4};
    int n = 9;
    for(int i=0; i<n; i++) {
        int temp = i+1;
        while (arr[i] > arr[temp] ) {
            swap(arr[i], arr[temp]);
        }
    }
    for (int i=0; i<n; i++) cout << arr[i] << " ";
}


int main() {
    // bubble_sort();
    // insertion_sort();

    int arr[] = {2, 3, 3, 2, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << n;
    return 0;
}