#pragma once

#include <string>

class Barang
{
private:
    int id;
    std::string nama;
    int harga;
    int stok;

public:
    // Constructor tanpa parameter
    Barang()
    {
        id = 0;
        nama = "";
        harga = 0;
        stok = 0;
    };

    // Constructor dengan parameter
    Barang(int id, std::string nama, int harga, int stok)
    {
        //use this-> to specify it refer to "id" from this class(Barang) not "id" from parameter
        this->id = id;
        this->nama = nama;
        this->harga = harga;
        this->stok = stok;
    };

    // Getter and Setter for id
    int getId() const { return id; }
    void setId(int value) { id = value; }

    // Getter and Setter for nama
    std::string getNama() const { return nama; }
    void setNama(const std::string& value) { nama = value; }

    // Getter and Setter for harga
    int getHarga() const { return harga; }
    void setHarga(int value) { harga = value; }

    // Getter and Setter for stok
    int getStok() const { return stok; }
    void setStok(int value) { stok = value; }

    ~Barang(){};
};
