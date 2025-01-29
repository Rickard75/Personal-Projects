#include <iostream>
#include <cmath>
#include <vector>

#include "Particle.h"
#include "VectorAnalysis.h"
using namespace std;

Vector3D Force (const Particle &p, const Vector3D &E, const Vector3D &B){
    // F = q(E + v x B)
    return Vector3D();
}

int main(int argc, char* argv[]){

    Vector3D pos("pos",15.4, 34.7, 9.14);
    Vector3D vel("vel",1.0, 2.0, 3.0);
    Particle* p = new Particle(105, +1, pos, vel);
    p->getInfo(p);
    delete p;

    const Vector3D *E = new Vector3D("E",1.2, 3.4, 5.6);
    const Vector3D *B = new Vector3D("B",3.7, 9.2, 0.5);

    E->getInfo();
    B->getInfo();

    Vector3D EplusB = Vector3D::sum(*E,*B);
    EplusB.getInfo();

    double EdotB = Vector3D::dot(*E,*B);
    cout << "EdotB: " << EdotB << endl;

    delete E;
    delete B;

    return 0;
}
