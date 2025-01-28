#include <iostream>
#include <cmath>
#include <vector>

#include "Particle.h"
using namespace std;

int main(int argc, char* argv[]){

    Particle* p = new Particle();
    p->getInfo(p);
    delete p;

    return 0;
}
