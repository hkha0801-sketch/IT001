#include <iostream>
using namespace std;

void NhapGiaTriVongTron(int* arr, int n);
void XoayXoayXoay(int* arr, int n, int s, int k);

int main() {
    int n; cin >> n;
    int s, k; cin >> s >> k;
    int circle[n];
    NhapGiaTriVongTron(circle, n);
    XoayXoayXoay(circle, n, s, k);
    return 0;
}

void NhapGiaTriVongTron(int* arr, int n) {
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
}

void XoayXoayXoay(int* arr, int n, int s, int k) {
    int* visited = new int[n]; 
    for(int i = 0; i < n; ++i) {
        visited[i] = -1;
    }
    
    long long count = 0;         
    long long total_value = 0;  
    int current_position = s;

    while (visited[current_position] == -1) {
        visited[current_position] = count;
        total_value += arr[current_position];
        count++;
        current_position = (int)(((long long)current_position + k) % n);
    }
    cout << count << " " << total_value << endl; 
    delete[] visited;
}