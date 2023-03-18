#include "paivays.h"
#include <iostream>

using std::cout;
using std::cin;

// Teht 2
void Paivays::setPaiva(int aPaiva) {
    paiva = aPaiva;
}

void Paivays::setKuukausi(int aKuukausi) {
    kuukausi = aKuukausi;
}

void Paivays::setVuosi(int aVuosi) {
    vuosi = aVuosi;
}

int Paivays::getPaiva() {
    return paiva;
}

int Paivays::getKuukausi() {
    return kuukausi;
}

int Paivays::getVuosi() {
    return vuosi;
}

void Paivays::tulostaPaivays() {
    cout << paiva << "." << kuukausi << "." << vuosi << "\n";
}

// Teht 3
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
