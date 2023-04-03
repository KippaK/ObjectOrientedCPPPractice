#include "kalenterimerkinta.h"
#include <string>
#include <iostream>

using std::cin;
using std::cout;

Kalenterimerkinta::Kalenterimerkinta() {
    asia = "null";
    muistutus = false;
}

Kalenterimerkinta::Kalenterimerkinta(int aPaiva, int aKuukausi, int aVuosi, string aAsia, bool aMuistutus) {
    setPaivays(aPaiva, aKuukausi, aVuosi);
    asia = aAsia;
    muistutus = aMuistutus;
}

const Paivays Kalenterimerkinta::getPaivays() {
    return paivays;
}

const string Kalenterimerkinta::getAsia() {
    return asia;
}

const bool Kalenterimerkinta::getMuistutus() {
    return muistutus;
}

void Kalenterimerkinta::setPaivays(int aPaiva, int aKuukausi, int aVuosi) {
    paivays.setPaiva(aPaiva);
    paivays.setKuukausi(aKuukausi);
    paivays.setVuosi(aVuosi);
}

void Kalenterimerkinta::setAsia(string aAsia) {
    asia = aAsia;
}

void Kalenterimerkinta::setMuistutus(bool aMuistutus) {
    muistutus = aMuistutus;
}

const void Kalenterimerkinta::tulostaMerkinta() {
    cout << asia << "\n";
    paivays.tulostaPaivays();
    if (muistutus == true){
        cout << "Muistutus on paalla\n";
    }
    else {
        cout << "Muistutus ei ole paalla\n";
    }
}

void Kalenterimerkinta::kysyTiedot() {
    char cMuistutus;
    cout << "Kerro muistutuksen asia: ";
    cin >> asia;
    paivays.setPaivays();
    cout << "Haluatko laitta muistutuksen paalle? (Y/N): ";
    cin >> cMuistutus;
    if (cMuistutus == 'y' || cMuistutus == 'Y'){
        muistutus = true;
    }
    else {
        muistutus = false;
    }
}
