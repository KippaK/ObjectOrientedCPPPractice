#include "henkilo.h"
#include "osoite.h"
#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::cin;

Henkilo::Henkilo() {
    nimi = "null";
    ika = -1;
    setOsoite("null", "null", "null");
}

Henkilo::Henkilo(string aNimi, int aIka, string aKatuosoite, string aPostinumero, string aKunta) {
    nimi = aNimi;
    ika = aIka;
    osoite.setKatuosoite(aKatuosoite);
    osoite.setPostinumero(aPostinumero);
    osoite.setKunta(aKunta);
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
    osoite.tulostaTiedot();
}

const Osoite Henkilo::getOsoite() {
    return osoite;
}

void Henkilo::setOsoite(string aKatuosoite, string aPostinumero, string aKunta) {
    osoite.setKatuosoite(aKatuosoite);
    osoite.setPostinumero(aPostinumero);
    osoite.setKunta(aKunta);
}
