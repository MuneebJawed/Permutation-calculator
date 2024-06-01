#include<iostream>
using namespace std;


int factorial(int a) {
    if (a == 1 || a == 0) {
        return 1;
    } else {
        return a * factorial(a - 1);
    }
}


int nPr(int n, int r) {
    return factorial(n) / factorial(n - r);
}

int main() {
    int n;
    int r;
    int n_factorial;
    int r_factorial;
    int result_nPr;

    cout << "Enter the value of n for nPr: ";
    cin >> n;

    cout << "Enter the value of r for nPr: ";
    cin >> r;


    if (n < r) {
        cout << "Error, the value of n should be greater than or equal to r." << endl;
    } else {

        n_factorial = factorial(n);
        r_factorial = factorial(r);
        result_nPr = nPr(n, r);


        cout << "n! = " << n_factorial << endl;
        cout << "r! = " << r_factorial << endl;
        cout << "nPr = " << result_nPr << endl;
    }

    return 0;
}

