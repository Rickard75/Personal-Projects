#ifndef VectorAnalysis_h
#define VectorAnalysis_h
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

class Vector3D {
    public:
        Vector3D(): name("NomeDelVettore"), x(1), y(1), z(1), norm(sqrt(3)) {
            cout << "Created " << name << "(" << 1 << "," << 1 << "," << 1 << "); ";
            cout << "||" << name << "|| = " << norm << endl;
        };
        Vector3D(string name, double x, double y, double z): name(name), x(x), y(y), z(z), norm(sqrt(x*x + y*y + z*z)) {
            cout << "Created " << name << "(" << x << "," << y << "," << z << "); ";
            cout << "||" << name << "|| = " << norm << endl; 
        };
        ~Vector3D() {
            cout << name << " has been destroyed" << endl;
        };

        void getInfo() const {
            cout << "----------------" << endl;
            cout << "INFO of " << name << endl;
            cout << "fx: " << x << endl;
            cout << "fy: " << y << endl;
            cout << "fz: " << z << endl;
            cout << "norm: " << norm << endl;
            cout << "----------------" << endl;
        }

        static Vector3D sum(const Vector3D &F1, const Vector3D &F2){
            return Vector3D(F1.name+"plus"+F2.name, F1.x + F2.x, F1.y + F2.y, F1.z + F2.z);
        }

        static Vector3D mult(double a, const Vector3D &V){
            return Vector3D(to_string(a)+"*"+V.name, a*V.x, a*V.y, a*V.z);
        }

        static double dot(const Vector3D &F1, const Vector3D &F2){
            return (F1.x * F2.x) + (F1.y * F2.y) + (F1.z * F2.z);
        }

        static Vector3D cross(const Vector3D &F1, const Vector3D &F2){
            return Vector3D(F1.name+"cross"+F2.name, (F1.y*F2.z)-(F1.z*F2.y),(F1.z*F2.x)-(F1.x*F2.z),(F1.x*F2.y)-(F1.y*F2.x));
        }

        double getX(const Vector3D &V){
            return x;
        }
        double getY(const Vector3D &V){
            return y;
        }
        double getZ(const Vector3D &V){
            return z;
        }
    private:
        string name;
        double x, y, z;
        double norm;
};

#endif