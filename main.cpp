#include <iostream>

using namespace std;

class takim{
    public:
    string isim;
    int kurulusYili;
    void yazdir(){
    cout<<"Takim sinifi"<<endl;
    }

};

class futbolcu:public takim{
    private:
    string isim = "Bir isim belirtilmedi...";
    public:
    int dogumYili;
    float maas;

    public:
    string getIsim(){
        return isim;
    }

    void setIsim(string isim){
        this->isim = isim;
    }

};


int main()
{
    futbolcu f1;
    takim *f1takim; //pointer kullanmamizin sebebi iki classtaki "isim" degiskenlerinin cakismasi!!!
    f1takim=&f1;

    f1.takim::isim = "Malatasaray"; //Burada ise pointer kullanmadan daha kolay bir sekilde o degere ulastik.
    cout<<"Alternatif Yontem: "<<f1.takim::isim<<endl;

    f1.setIsim("Kaan");
    f1takim->isim = "Galatasaray";
    f1.dogumYili=1996;
    f1.maas = 12500;
    cout<<"f1takim: "<<f1takim->isim<<endl;
    cout<<f1.getIsim()<<" "<<f1.dogumYili<<" "<<f1.maas<<endl;

    f1.yazdir();
    return 0;
}
