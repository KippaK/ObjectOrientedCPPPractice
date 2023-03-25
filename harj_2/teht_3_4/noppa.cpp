#include <ctime>
#include <cstdlib>
#include <stdio.h>
#include "noppa.h"

Noppa::Noppa() {
    noppienLkm = 1;
    std::srand(std::time(nullptr));
    viimeisinLukema = std::rand() % 6 + 1;
}

Noppa::Noppa(int aNoppienLkm) {
    noppienLkm = aNoppienLkm;
    std::srand(std::time(nullptr));
    viimeisinLukema = 0;
    for (int i = 0; i < noppienLkm; i++){
        viimeisinLukema += std::rand() % 6 + 1;
    }
}

int Noppa::getViimeisinLukema() {
    return viimeisinLukema;
}

void Noppa::heitaNoppaa() {
    std::srand(std::time(nullptr));
    viimeisinLukema = 0;
    for (int i = 0; i < noppienLkm; i++){
        int lukema = std::rand() % 6 + 1;
        viimeisinLukema += lukema;
        printf("noppa%d: %d, ", i + 1, lukema);
    }
    printf("yhteensa %d\n", viimeisinLukema);
}

void Noppa::kerroViimeisinHeitonLukema() {
    printf("Viimeisin heitto %d. Heitetty %d nopalla\n", viimeisinLukema, noppienLkm);
}

int Noppa::getNoppienLkm() {
    return noppienLkm;
}

void Noppa::setNoppienLkm(int aNoppienLkm) {
    noppienLkm = aNoppienLkm;
}
