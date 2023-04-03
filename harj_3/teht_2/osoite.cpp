#include "osoite.h"
#include <iostream>
#include <string>

using std::cout;

Osoite::Osoite() {
    katuosoite = "null";
    postinumero = "null";
    kunta = "null";
}

Osoite::Osoite(string aKatuosoite, string aPostinumero, string aKunta) {
    katuosoite = aKatuosoite;
    postinumero = aPostinumero;
    kunta = aKunta;
}

void Osoite::tulostaTiedot() {
    cout << katuosoite << ", " << postinumero << " " << kunta << "\n";
}

void Osoite::setKatuosoite(string aKatuosoite) {
    katuosoite = aKatuosoite;
}

void Osoite::setPostinumero(string aPostinumero) {
    postinumero = aPostinumero;
}

void Osoite::setKunta(string aKunta) {
    kunta = aKunta;
}

string Osoite::getKatuosoite() {
    return katuosoite;
}

string Osoite::getPostinumero() {
    return postinumero;
}

string Osoite::getKunta() {
    return kunta;
}
