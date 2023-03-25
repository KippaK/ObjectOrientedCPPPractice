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
    string getNimi();
    int getIka();
    void tulostaTiedot();

private:
    string nimi;
    int ika;
};