class Noppa{
    public:
    Noppa();
    Noppa(int aNoppienLkm);

    int getViimeisinLukema();
    void heitaNoppaa();
    void kerroViimeisinHeitonLukema();

    int getNoppienLkm();
    void setNoppienLkm(int aNoppienLkm);

    private:
    int viimeisinLukema;
    int noppienLkm;
};