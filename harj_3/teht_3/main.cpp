#include "paivays.h"
#include "kalenterimerkinta.h"

int main() {
    Kalenterimerkinta k1;
    Kalenterimerkinta k2(25, 10, 2034, "Kalenteri", true);
    k1.tulostaMerkinta();
    k2.tulostaMerkinta();
    return 0;
}