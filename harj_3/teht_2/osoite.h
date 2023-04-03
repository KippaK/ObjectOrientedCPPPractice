#pragma once
#include <string>

using std::string;

class Osoite {
public:
    Osoite();
    Osoite(string aKatuosoite, string aPostinumero, string aKunta);
    void tulostaTiedot();
    void setKatuosoite(string aKatuosoite);
    void setPostinumero(string aPostinumero);
    void setKunta(string aKunta);
    string getKatuosoite();
    string getPostinumero();
    string getKunta();

private:
    string katuosoite;
    string postinumero;
    string kunta;
};