#pragma once

#include <string>
#include "PartLaptop.cpp"

class Display : public PartLaptop
{
private:
    std::string resolusi;
    int ukuran;
    std::string tipePanel;
    std::string aspekRatio;

public:
    // Constructor tanpa parameter
    Display()
    {
        resolusi = "";
        ukuran = 0;
        tipePanel = "";
        aspekRatio = "";
    };

    // Constructor dengan parameter
    Display(int         id,         std::string nama,   int harga,
            int         stok,       std::string noPart,
            std::string manufaktur, std::string kondisi,
            std::string resolusi,   int         ukuran,
            std::string tipePanel, std::string aspekRatio)
    : PartLaptop(id, nama, harga, stok, noPart, manufaktur, kondisi)
    {
        //use this-> to specify it refer to "resolusi" from this class(Display) not "resolusi" from parameter
        this->resolusi = resolusi;
        this->ukuran = ukuran;
        this->tipePanel = tipePanel;
        this->aspekRatio = aspekRatio;
    };

    // Getter and Setter for resolusi
    std::string getResolusi() const { return resolusi; }
    void setResolusi(const std::string& value) { resolusi = value; }

    // Getter and Setter for ukuran
    int getUkuran() const { return ukuran; }
    void setUkuran(int value) { ukuran = value; }

    // Getter and Setter for tipePanel
    std::string getTipePanel() const { return tipePanel; }
    void setTipePanel(const std::string& value) { tipePanel = value; }

    // Getter and Setter for aspekRatio
    std::string getAspekRatio() const { return aspekRatio; }
    void setAspekRatio(const std::string& value) { aspekRatio = value; }


    ~Display(){};
};
