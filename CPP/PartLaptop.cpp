#pragma once

#include <string>
#include "Barang.cpp"

class PartLaptop : public Barang
{
private:
    std::string noPart;
    std::string manufaktur;
    std::string kondisi;

public:
    // Constructor tanpa parameter
    PartLaptop()
    {
        noPart = "";
        manufaktur = "";
        kondisi = "";
    };

    // Constructor dengan parameter
    PartLaptop(int id, std::string nama, int harga, int stok, std::string noPart, std::string manufaktur, std::string kondisi)
    : Barang(id, nama, harga, stok)
    {
        //use this-> to specify it refer to "noPart" from this class(PartLaptop) not "noPart" from parameter
        this->noPart = noPart;
        this->manufaktur = manufaktur;
        this->kondisi = kondisi;
    };

    // Getter and Setter for noPart
    std::string getNoPart() const { return noPart; }
    void setNoPart(const std::string& value) { noPart = value; }

    // Getter and Setter for manufaktur
    std::string getManufaktur() const { return manufaktur; }
    void setManufaktur(const std::string& value) { manufaktur = value; }

    // Getter and Setter for kondisi
    std::string getKondisi() const { return kondisi; }
    void setKondisi(const std::string& value) { kondisi = value; }


    ~PartLaptop(){};
};
