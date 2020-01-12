#ifndef KSIAZKAADRESOWA_H
#define KSIAZKAADRESOWA_H

#include "UzytkownikMenedzer.h"

using namespace std;

class KsiazkaAdresowa
{
    UzytkownikMeneger uzytkownikMeneger;
public:
    void rejestracjaUzytkownika();
    void wypiszWszystkichUzytkownikow();
};

#endif // KSIAZKAADRESOWA_H
