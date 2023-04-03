#include "paivays.h"
#include <iostream>

using std::cout;
using std::cin;

Paivays::Paivays() {
    paiva = 1;
    kuukausi = 1;
    vuosi = 1970;
}

Paivays::~Paivays(){}

Paivays::Paivays(int aPaiva, int aKuukausi, int aVuosi){
    paiva = aPaiva;
    kuukausi = aKuukausi;
    vuosi = aVuosi;
}

void Paivays::setPaiva(int aPaiva) {
    paiva = aPaiva;
}

void Paivays::setKuukausi(int aKuukausi) {
    kuukausi = aKuukausi;
}

void Paivays::setVuosi(int aVuosi) {
    vuosi = aVuosi;
}

const int Paivays::getPaiva() {
    return paiva;
}

const int Paivays::getKuukausi() {
    return kuukausi;
}

const int Paivays::getVuosi() {
    return vuosi;
}

const void Paivays::tulostaPaivays() {
    cout << paiva << "." << kuukausi << "." << vuosi << "\n";
}

void Paivays::setPaivays() {
    cout << "Syota paiva (int): ";
    cin >> paiva;
    cout << "Syotaa kuukausi (int): ";
    cin >> kuukausi;
    cout << "Syota vuosi (int): ";
    cin >> vuosi;
}

void Paivays::lisaaPaiva() {
    int maxPaiva = 31;

    if ((kuukausi < 8 && kuukausi % 2 == 1) || (kuukausi > 7 && kuukausi % 2 == 0)){
        maxPaiva = 31;
    }
    else if (kuukausi == 4 || kuukausi == 6 || kuukausi == 9 || kuukausi == 11){
        maxPaiva = 30;
    }
    else {
        if (vuosi % 4 == 0 && vuosi % 400 != 0){
            maxPaiva = 29;
        }
        else {
            maxPaiva = 28;
        }
    }

    paiva++;
    if (paiva > maxPaiva) {
        paiva = 1;
        kuukausi++;
    }
    if (kuukausi == 13) {
        kuukausi = 1;
        vuosi++;
    }
}