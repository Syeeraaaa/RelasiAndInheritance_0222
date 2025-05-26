#ifndef IBU_H
#define IBU_H

class Ibu{
    public:
    string nama;
    vector<anak *> daftar_anak;

    ibu(string pNama) : nama(pNama)
    {
        cout << "Ibu \"" << nama << "\" ada \n";
    }
    void tambahAnak(anak *);
}