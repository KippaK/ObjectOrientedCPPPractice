#pragma once

class Paivays {
public:
    // harjoitus 2 - tehtävä 1
    Paivays(int aPaiva, int aKuukausi, int aVuosi);
    Paivays();

    ~Paivays();

    // harjoitus 1
    void setPaiva(int aPaiva);
    void setKuukausi(int aKuukausi);
    void setVuosi(int aVuosi);
    int getPaiva();
    int getKuukausi();
    int getVuosi();
    void tulostaPaivays();
    void setPaivays();
    void lisaaPaiva();

private:
    int paiva = 1, kuukausi = 1, vuosi = 1970;
};