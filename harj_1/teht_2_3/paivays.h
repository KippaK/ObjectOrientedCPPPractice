#pragma once

class Paivays {
public:
    // Teht 2
    void setPaiva(int aPaiva);
    void setKuukausi(int aKuukausi);
    void setVuosi(int aVuosi);
    int getPaiva();
    int getKuukausi();
    int getVuosi();
    void tulostaPaivays();

    // Teht 3
    void setPaivays();
    void lisaaPaiva();

private:
    // Teht 2
    int paiva, kuukausi, vuosi;
};