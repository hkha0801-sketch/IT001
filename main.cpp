#include <iostream>
using namespace std;
void NhapMaTran (int a[][100], int x, int y){
    for (int i=0; i<x; i++)
        for (int j=0; j<x; j++)
            std::cin >> a[i][j];
}
         

 int main() {
    int a[100][100], x, y, b[100][100], o, v;
    cin >> x >> y;
    NhapMaTran(a,x,y);
    cin >> o >> v;
    NhapMaTran(b,o,v);
    for (int i=0; i<x; i++){
        for (int j=0; j<y; j++){
            cout << a[i][j] + b[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
