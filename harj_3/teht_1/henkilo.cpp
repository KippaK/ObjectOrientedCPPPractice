#include "henkilo.h"
#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::cin;

Henkilo::Henkilo() {
    cout << "\nHenkilo luokan parametriton rakentaja";
    nimi = "nimi";
    ika = -1;
}

Henkilo::Henkilo(string aNimi, int aIka) {
    cout << "\nHenkilo luoka 2 parametrinen rakentaja";
    nimi = aNimi;
    ika = aIka;
}

Henkilo::~Henkilo() {
    cout << "\nHenkilo luokan purkaja";
}

void Henkilo::setNimi(string aNimi) {
    nimi = aNimi;
}

void Henkilo::setIka(int aIka) {
    ika = aIka;
}

const string Henkilo::getNimi() {
    return nimi;
}

const int Henkilo::getIka() {
    return ika;
}

const void Henkilo::tulostaTiedot() {
    cout << "Henkilon tiedot\n";
    cout << "Nimi: " << nimi << "\n";
    cout << "Ika: " << ika << "\n";
}
