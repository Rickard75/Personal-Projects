#include <iostream>
#include <cmath>
#include <vector>

#include "Particle.h"
#include "VectorAnalysis.h"
using namespace std;

int main(int argc, char* argv[]){

    // PARTICLE CREATION
    cout << "----------------------PARTICLE CREATION---------------" << endl;
    double pos_x = 0.0, pos_y = 0.0, pos_z = 0.0;
    cout << "Insert position: " << endl;
    cout << "x = "; cin >> pos_x;
    cout << "y = "; cin >> pos_y;
    cout << "z = "; cin >> pos_z;
    double vel_x = 0.0, vel_y = 0.0, vel_z = 0.0;
    cout << "Insert velocity: " << endl;
    cout << "vx = "; cin >> vel_x;
    cout << "vy = "; cin >> vel_y;
    cout << "vz = "; cin >> vel_z;

    Vector3D pos("pos",pos_x, pos_y, pos_z);
    Vector3D vel("vel",vel_x, vel_y, vel_z);
    Particle* p = new Particle(105, +1, pos, vel);
    cout << p << endl;
    p->getInfo(p);
    
    // FIELD CREATION
    cout << "---------------------FIELD CREATION----------------------------" << endl;
    double E_x = 0.0, E_y = 0.0, E_z = 0.0;
    cout << "Insert electrical field: " << endl;
    cout << "Ex = "; cin >> E_x;
    cout << "Ey = "; cin >> E_y;
    cout << "Ez = "; cin >> E_z;
    double B_x = 0.0, B_y = 0.0, B_z = 0.0;
    cout << "Insert magnetic field: " << endl;
    cout << "Bx = "; cin >> B_x;
    cout << "By = "; cin >> B_y;
    cout << "Bz = "; cin >> B_z;
    const Vector3D *E = new Vector3D("E", E_x, E_y, E_z);
    const Vector3D *B = new Vector3D("B", B_x, B_y, B_z);

    const Vector3D force = p->Force(*p,*E,*B);
    force.getInfo();

    /*
    E->getInfo();
    B->getInfo();

    Vector3D EplusB = Vector3D::sum(*E,*B);
    EplusB.getInfo();

    double EdotB = Vector3D::dot(*E,*B);
    cout << "EdotB: " << EdotB << endl;
    */

    delete E;
    delete B;
    delete p;

    return 0;
}
