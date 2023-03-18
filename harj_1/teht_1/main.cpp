#include <iostream>
#include "henkilo.cpp"

using namespace std;

int main(){
    Henkilo h1, h2;
    h1.setIka(20);
    h1.setNimi("Pekka");
    h2.setIka(25);
    h2.setNimi("Jani");

    h1.tulostaTiedot();
    h2.tulostaTiedot();

    return 0;
}