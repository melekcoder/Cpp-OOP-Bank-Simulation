

#include <iostream>
using namespace std;

class bankaHesap {
protected:
    string hesapNo;
    double bakiye;

public:
    bankaHesap(string no, double ilkBakiye) : hesapNo(no), bakiye(ilkBakiye) {}
    virtual void paraYatir(double miktar) {
        bakiye += miktar;
        cout << miktar << "tl yatırıldı" << bakiye << "yeni bakiyeniz" << endl;
    }
    virtual void paraÇek(double miktar) {
        if (miktar <= bakiye) {
            bakiye -= miktar;
            cout << miktar << "tl cekildi: " << endl;
        }
        else {
            cout << "yetersiz bakiye " << endl;
        }
    }
};
class vadeliHesap : public bankaHesap {
    double faizOranı = 0.02;
public:
    vadeliHesap(string no, double bakiye) : bankaHesap(no, bakiye) {}
    void paraÇek(double miktar)override {
        double cezaKesintisi = miktar * 0.05;
        if (miktar + cezaKesintisi <= bakiye) {
            bakiye -= miktar + cezaKesintisi;
            cout << "Vadeyi bozdugunuz ıçın %5 kesıntı yapıldı:";

        }
        else {
            cout << "yetersiz bakiye\n";
        }


    }
};  
int main() {
    bankaHesap hesap("0001",5000.0);
    hesap.paraÇek(3000);
    vadeliHesap vdlhesap("0002", 8000.0);
    vdlhesap.paraÇek(9000);
    return 0;
}