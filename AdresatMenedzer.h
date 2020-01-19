#ifndef ADRESATMENEDZER_H
#define ADRESATMENEDZER_H

#include <iostream>
#include <vector>
#include <windows.h>

#include "Adresat.h"
#include "Uzytkownik.h"

using namespace std;

class AdresatMenedzer
{
    vector<Adresat> adresaci;

public:
    //UzytkownikMenedzer(string nazwaPlikuZUzytkownikami) : plikZUzytkownikami(nazwaPlikuZUzytkownikami){};
    void dodajAdresata();
};

#endif // ADRESATMENEDZER_H
