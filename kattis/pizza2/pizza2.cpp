//Problem Pizza Crust - https://open.kattis.com/problems/pizza2
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main () {
    int r, c;
    cin >> r >> c; 
    int x = r - c; 
    long double area = x * x * M_PI; 
    long double totalArea = r * r * M_PI; 
    cout << fixed << setprecision(10) << (area / totalArea) * 100; 
    return 0;
}
