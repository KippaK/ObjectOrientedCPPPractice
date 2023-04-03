#include <iostream>
#include "henkilo.h"

using namespace std;

int main(){
    Henkilo pekka("Pekka", 25, "Pirttikuja", "35204", "Toijala");
    Henkilo matti;
    matti.setOsoite("Kujakatu", "36230", "Savonlinna");

    pekka.tulostaTiedot();
    matti.tulostaTiedot();

    return 0;
}