#pragma once
#include <string>

using std::string;

class Henkilo {
    public:
    Henkilo();
    Henkilo(string aNimi, int aIka);
    ~Henkilo();
    
    void setNimi(string aNimi);
    void setIka(int aIka);
    const string getNimi();
    const int getIka();
    const void tulostaTiedot();

private:
    string nimi;
    int ika;
};