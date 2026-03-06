#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int Solvablecount = 0;

    for(int i=1; i<=n; i++){
    int Petya, Vasya, Tonya;
    cin >> Petya >> Vasya >> Tonya;

    if (Petya+Vasya+Tonya >= 2) {
        Solvablecount++;
    }
}
cout << Solvablecount << endl;
    return 0;
}
