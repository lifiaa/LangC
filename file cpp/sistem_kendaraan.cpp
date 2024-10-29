#include <iostream>
#include <string>

// Kelas dasar (superclass) untuk Kendaraan
class Kendaraan {
protected:
    std::string merk;
    int tahun;

public:
    Kendaraan(std::string merk, int tahun) : merk(merk), tahun(tahun) {}

    virtual void info() {
        std::cout << "Merk: " << merk << ", Tahun: " << tahun << std::endl;
    }

    virtual ~Kendaraan() {}
};

// Kelas turunan (subclass) untuk Mobil
class Mobil : public Kendaraan {
private:
    int jumlahPintu;

public:
    Mobil(std::string merk, int tahun, int jumlahPintu)
        : Kendaraan(merk, tahun), jumlahPintu(jumlahPintu) {}

    void info() override {
        std::cout << "Merk: " << merk << ", Tahun: " << tahun
                  << ", Jumlah Pintu: " << jumlahPintu << std::endl;
    }
};

// Kelas turunan (subclass) untuk Motor
class Motor : public Kendaraan {
private:
    bool memilikiSidecar;

public:
    Motor(std::string merk, int tahun, bool memilikiSidecar)
        : Kendaraan(merk, tahun), memilikiSidecar(memilikiSidecar) {}

    void info() override {
        std::cout << "Merk: " << merk << ", Tahun: " << tahun
                  << ", Memiliki Sidecar: " << (memilikiSidecar ? "Ya" : "Tidak") << std::endl;
    }
};

int main() {
    Kendaraan* kendaraan1 = new Mobil("Toyota", 2020, 4);
    Kendaraan* kendaraan2 = new Motor("Harley Davidson", 2018, true);

    kendaraan1->info(); // Output: Merk: Toyota, Tahun: 2020, Jumlah Pintu: 4
    kendaraan2->info(); // Output: Merk: Harley Davidson, Tahun: 2018, Memiliki Sidecar: Ya

    delete kendaraan1;
    delete kendaraan2;

    return 0;
}
