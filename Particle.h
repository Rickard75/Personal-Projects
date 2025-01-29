#ifndef Particle_h
#define Particle_h
#include <vector>
#include <iostream>
#include "VectorAnalysis.h"
using namespace std;

class Particle{
    public:
        // constructors and destructor
        Particle() : mass(1.0), charge(+1.0), r(Vector3D()), v(Vector3D()) {
            cout << "Particella creata" << endl;
        }
        Particle(double m, int chg, Vector3D r, Vector3D v):
            mass(m), charge(chg), r(r), v(v) {
                cout << "Particella creata" << endl;
            }
        ~Particle() {
            cout << "Particella distrutta" << endl;
        }

        // retrieve information
        void getInfo(Particle *p) {
            cout << "Mass: "<< p->mass << endl;
            cout << "Charge: " << p->charge << endl;
            
            cout << "r_x: " << p->r.getX(r) << endl;
            cout << "r_y: " << p->r.getY(r) << endl;
            cout << "r_z: " << p->r.getZ(r) << endl;

            cout << "v_x: " << p->v.getX(r) << endl;            
            cout << "v_y: " << p->v.getY(r) << endl;            
            cout << "v_z: " << p->v.getZ(r) << endl;            
        }

        const Vector3D Force (const Particle &p, const Vector3D &E, const Vector3D &B){
            // f = q(E + v x B)
            return Vector3D::mult(p.charge, Vector3D::sum(E,Vector3D::cross(p.v,B)));
        }

    private:
        double mass;
        int charge;
        Vector3D r;
        Vector3D v;
};

#endif