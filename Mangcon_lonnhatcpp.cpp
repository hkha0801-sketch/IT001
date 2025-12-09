#include <iostream>
using namespace std;

void solve(int* arr, int n);

int main(){
    int n; cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    solve(arr, n);

    return 0;
}

void solve(int* arr, int n) {
    const int MAX_VALUE = 101;
    int freq[MAX_VALUE] = {0}; 
    for (int i = 0; i < n; i++) {
        int value = arr[i];

        if (value >= 0 && value < MAX_VALUE) { 
            freq[value]++;
        }
    }

    int max_size = 0;

    for (int i = 0; i < MAX_VALUE - 1; i++) { 
        int current_size = freq[i] + freq[i+1];

        if (current_size > max_size) {
            max_size = current_size;
        }
    }
    
    if (n > 0 && max_size == 0) {
        
        max_size = 1;
    }

    cout << max_size << endl;
}