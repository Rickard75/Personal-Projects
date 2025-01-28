#include <iostream>
#include <cmath>
#include <vector>

#include "Particle.h"
#include "VectorAnalysis.h"
using namespace std;

int main(int argc, char* argv[]){

    Particle* p = new Particle();
    p->getInfo(p);
    delete p;

    Field* E = new Field(1.2, 3.4, 5.6);
    delete E;

    return 0;
}
