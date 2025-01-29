#include <iostream>
#include <cmath>
#include <vector>

#include "Particle.h"
#include "VectorAnalysis.h"
using namespace std;

int main(int argc, char* argv[]){

    vector<double> pos = {15.4, 34.7, 9.14};
    vector<double> vel = {0.0, 0.0, 0.0};
    Particle* p = new Particle(105, +1, pos, vel);
    p->getInfo(p);
    delete p;

    const Field *E = new Field("E",1.2, 3.4, 5.6);
    const Field *B = new Field("B",3.7, 9.2, 0.5);

    E->getInfo();
    B->getInfo();

    Field EplusB = Field::sum(*E,*B);
    EplusB.getInfo();

    double EdotB = Field::dot(*E,*B);
    cout << "EdotB: " << EdotB << endl;

    delete E;
    delete B;

    return 0;
}
