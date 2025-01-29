#ifndef VectorAnalysis_h
#define VectorAnalysis_h
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

class Field {
    public:
        Field(): name("NomeDelCampo"), a(1), b(1), c(1), norm(sqrt(3)) {
            cout << "Campo " << name << " creato" << endl;
            cout << "f(" << 1 << "," << 1 << "," << 1 << "); ";
            cout << "||f|| = " << norm << endl;
        };
        Field(string name, double a, double b, double c): name(name), a(a), b(b), c(c), norm(sqrt(a*a + b*b + c*c)) {
            cout << "Campo " << name << " creato" << endl;
            cout << "f(" << a << "," << b << "," << c << "); ";
            cout << "||f|| = " << norm << endl; 
        };
        ~Field() {
            cout << "Campo " << name << " distrutto" << endl;
        };

        void getInfo() const {
            cout << "----------------" << endl;
            cout << "INFO of " << name << endl;
            cout << "fx: " << a << endl;
            cout << "fy: " << b << endl;
            cout << "fz: " << c << endl;
            cout << "norm: " << norm << endl;
            cout << "----------------" << endl;
        }

        static Field sum(const Field &F1, const Field &F2){
            return Field(F1.name+"plus"+F2.name, F1.a + F2.a, F1.b + F2.b, F1.c + F2.c);
        }

        static double dot(const Field &F1, const Field &F2){
            return (F1.a * F2.a) + (F1.b * F2.b) + (F1.c * F2.c);
        }

        static Field cross(const Field &F1, const Field &F2){
            return Field(F1.name+"cross"+F2.name, (F1.b*F2.c)-(F1.c*F2.b),(F1.c*F2.a)-(F1.a*F2.c),(F1.a*F2.b)-(F1.b*F2.a));
        }

    private:
        string name;
        double a, b, c;
        double norm;
};

#endif