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

    Field* E = new Field(1.2, 3.4, 5.6);
    Field* B = new Field(3.7, 9.2, 0.5);

    delete E;
    delete B;

    return 0;
}
