#ifndef Particle_h
#define Particle_h
#include <vector>
#include <iostream>
using namespace std;

class Particle{
    public:
        Particle() : mass(1.0), charge(+1.0), r({0,0,0}), v({0,0,0}) {
            cout << "Particella creata" << endl;
        }
        Particle(double m, int chg, vector<double> r, vector<double> v):
            mass(m), charge(chg), r(r), v(v) {
                cout << "Particella creata" << endl;
            }
        ~Particle() {
            cout << "Particella distrutta" << endl;
        }

        void getInfo(Particle *p) {
            cout << "Mass: "<< p->mass << endl;
            cout << "Charge: " << p->charge << endl;
            for (int i=0; i<3; i++){
                cout << "Posizione " << i << ": " << p->r.at(i) << endl;
                cout << "Velocità " << i << ": " << p->v.at(i) << endl;
            }

        }

        /*void force(Particle *p, double E, double B){
            double f = (p->charge)*( sum3( E, cross(p->v,B) ) );
            double a = (1/p->mass)*f;




        }*/

    private:
        double mass;
        int charge;
        vector<double> r;
        vector<double> v;
};

// a new comment

#endif