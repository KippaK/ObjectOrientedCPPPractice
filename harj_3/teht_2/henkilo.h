#pragma once
#include <string>
#include "osoite.h"

using std::string;

class Henkilo {
    public:
    Henkilo();
    Henkilo(string aNimi, int aIka, string aKatuosoite, string aPostinumero, string aKunta);
    void setNimi(string aNimi);
    void setIka(int aIka);
    const string getNimi();
    const int getIka();
    const void tulostaTiedot();
    void setOsoite(string aKatuosoite, string aPostinumero, string aKunta);
    const Osoite getOsoite();

private:
    string nimi;
    int ika;
    Osoite osoite;
};