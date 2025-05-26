#include <iostream>
#include <vector>
using namespace std;

#include "Anak.h"
#include "ibu.h"

int main()
{
    Ibu *varIbu = new ibu("Dini");
    Ibu *varIbu2 = new ibu ("novi");
    anak *varAnak1 = new anak("Tono");
    anak *varAnak2 = new anak("Rini");
    anak *varAnak3 = new anak("dewi");

    varIbu->tambahAnak(varAnak1);
    varIbu->tambahAnak(varAnak2);

    varIbu->cetakAnak();
    varIbu2->cetakAnak();

    delete varIbu;
    delete varIbu2;
    delete varAnak1;
    delete varAnak2;
    delete varAnak3;

    return 0;
}