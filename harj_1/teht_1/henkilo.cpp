#include "henkilo.h"
#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::cin;

void Henkilo::setNimi(string aNimi) {
    nimi = aNimi;
}

void Henkilo::setIka(int aIka) {
    ika = aIka;
}

string Henkilo::getNimi() {
    return nimi;
}

int Henkilo::getIka() {
    return ika;
}

void Henkilo::tulostaTiedot() {
    cout << "Henkilon tiedot\n";
    cout << "Nimi: " << nimi << "\n";
    cout << "Ika: " << ika << "\n";
}
