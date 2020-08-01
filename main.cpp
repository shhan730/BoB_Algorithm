#include <iostream>

using namespace std;

int main() {
    int map[10][10];

    int size;
    cout << "Input Size: " << '\n';
    cin >> size;

    cout << "Input Data: " << '\n';
    cout << "Sample:(When Size is 5)\n1 2 3 4 5\n6 7 8 9 10\n11 12 13 14 15\n16 17 18 19 20\n21 22 23 24 25\n";
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++) {
            cin >> map[j][size-(i+1)];
        }
    }

    cout << "Result: " << '\n';
    for(int i=0; i<size; i++){
        for(int j=0; j<size; j++) printf("%2d ", map[i][j]);
        cout << '\n';
    }




}
