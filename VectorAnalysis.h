#ifndef VectorAnalysis_h
#define VectorAnalysis_h
#include <iostream>
#include <vector>
using namespace std;

class Field {
    public:
        Field(): a(1), b(1), c(1), norm(sqrt(3)) {
            cout << "Campo creato" << endl;
            cout << "f(" << 1 << "," << 1 << "," << 1 << "); ";
            cout << "||f|| = " << norm << endl;
        };
        Field(double a, double b, double c): a(a), b(b), c(c), norm(sqrt(a*a + b*b + c*c)) {
            cout << "Campo creato" << endl;
            cout << "f(" << a << "," << b << "," << c << "); ";
            cout << "||f|| = " << norm << endl; 
        };
        ~Field() {
            cout << "Campo distrutto" << endl;
        };

    private:
        double a, b, c;
        double norm;
};

#endif