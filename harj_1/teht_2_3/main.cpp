#include <iostream>
#include "paivays.cpp"

using namespace std;

int main() {
    Paivays tanaan, huomenna, omaPaivays;

    tanaan.setPaiva(18);
    tanaan.setKuukausi(3);
    tanaan.setVuosi(2023);

    huomenna.setPaiva(19);
    huomenna.setKuukausi(3);
    huomenna.setVuosi(2023);

    tanaan.tulostaPaivays();
    huomenna.tulostaPaivays();

    omaPaivays.setPaivays();
    omaPaivays.tulostaPaivays();
    omaPaivays.lisaaPaiva();
    omaPaivays.tulostaPaivays();

    return 0;
}