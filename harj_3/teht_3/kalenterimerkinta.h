#pragma once
#include <string>
#include "paivays.h"

using std::string;

class Kalenterimerkinta {
public:
    Kalenterimerkinta();
    Kalenterimerkinta(int aPaiva, int aKuukausi, int aVuosi, string aAsia, bool aMuistutus);
    const Paivays getPaivays();
    const string getAsia();
    const bool getMuistutus();
    void setPaivays(int aPaiva, int aKuukausi, int aVuosi);
    void setAsia(string aAsia);
    void setMuistutus(bool aMuistutus);
    
    const void tulostaMerkinta();
    void kysyTiedot();

private:
    Paivays paivays;
    string asia;
    bool muistutus;
};