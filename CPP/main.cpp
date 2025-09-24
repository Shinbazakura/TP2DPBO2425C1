#include <iostream>
#include <string>
#include <vector>
#include <limits>
#include <iomanip>
#include <algorithm>
#include <cctype>

#include "Barang.cpp"
#include "PartLaptop.cpp"
#include "Display.cpp"

void printDisplay(Display input);
void printDisplayTable(const std::vector<Display> &listDisplay);
void clearScreen();
void welcome();
void help();

int main()
{
    // test Barang
    // Display test;
    // test.setId(10);
    // test.setNama("C4 Cotroller");
    // test.setHarga(100000);
    // test.setStok(10);
    // test.setNoPart("11AA43FD");
    // test.setManufaktur("Pabrik Terang");
    // test.setKondisi("Baru");
    // test.setResolusi("1920 X 1080");
    // test.setUkuran(27);
    // test.setTipePanel("OLED");
    // test.setAspekRatio("16:9");

    // printDisplay(test);
    

    // Array Class Display
    std::vector<Display> listDisplay;

    // input data dengan GetSet
    Display disp1;
    disp1.setId(1);
    disp1.setNama("AUO B140HAN01.3 14 inch FHD IPS");
    disp1.setHarga(1350000);
    disp1.setStok(6);
    disp1.setNoPart("B140HAN01.3");
    disp1.setManufaktur("AU Optronics");
    disp1.setKondisi("Baru");
    disp1.setResolusi("1920x1080");
    disp1.setUkuran(14);
    disp1.setTipePanel("IPS");
    disp1.setAspekRatio("16:9");

    listDisplay.push_back(disp1);

    Display disp2(
        2, "LG LP156UD1-SPB1 15.6 inch 4K IPS", 3300000, 3,
        "LP156UD1-SPB1", "LG Display", "Baru",
        "3840x2160", 15, "IPS", "16:9"
    );

    Display disp3(
        3, "Samsung LTN133YL01-L01 13.3 inch QHD+", 2850000, 4,
        "LTN133YL01-L01", "Samsung", "Baru",
        "3200x1800", 13, "PLS", "16:9"
    );

    Display disp4(
        4, "BOE NV156FHM-N4B 15.6 inch FHD 144 Hz", 2500000, 5,
        "NV156FHM-N4B", "BOE", "Baru",
        "1920x1080", 15, "IPS 144Hz", "16:9"
    );

    Display disp5(
        5, "Innolux N173HCE-E31 17.3 inch FHD IPS", 2700000, 2,
        "N173HCE-E31", "Innolux", "Baru",
        "1920x1080", 17, "IPS", "16:9"
    );

    Display disp6(
    6, "Sharp LQ156R1JW02 15.6 inch 4K IGZO", 3900000, 2,
    "LQ156R1JW02", "Sharp", "Baru",
    "3840x2400", 15, "IGZO IPS", "16:10"
    );

    Display disp7(
        7, "BOE NE160QDM-NY1 16 inch 2.5K 165 Hz", 3800000, 2,
        "NE160QDM-NY1", "BOE", "Baru",
        "2560x1600", 16, "IPS 165 Hz", "16:10"
    );



    // masukkan semuanya ke vector
    listDisplay.push_back(disp2);
    listDisplay.push_back(disp3);
    listDisplay.push_back(disp4);
    listDisplay.push_back(disp5);
    listDisplay.push_back(disp6);
    listDisplay.push_back(disp7);

    // printDisplayTable(listDisplay);

    std::string input{};
    int flag = 0;

    clearScreen();
    welcome();

    while (flag == 0)
    {
        std::cout << ">";
        // std::cin >> input;
        std::getline(std::cin, input);

        std::transform(input.begin(), input.end(), input.begin(), ::toupper);

        if (input == "SHOW")
        {
            printDisplayTable(listDisplay);
        }
        else if (input == "ADD")
        {
            // std::cout << "Add";
            Display tempD;
            std::string tempS{};
            int tempI{};
            // ask user input for new data
            std::cout << "Masukan ID : ";
            std::cin >> tempI;
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // clear newline
            tempD.setId(tempI);
            
            std::cout << "Masukan Nama : ";
            std::getline(std::cin, tempS);
            tempD.setNama(tempS);
            
            std::cout << "Masukan Harga : ";
            std::cin >> tempI;
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // clear newline
            tempD.setHarga(tempI);

            std::cout << "Masukan Stok : ";
            std::cin >> tempI;
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // clear newline
            tempD.setStok(tempI);

            std::cout << "Masukan No Part : ";
            std::getline(std::cin, tempS);
            tempD.setNoPart(tempS);

            std::cout << "Masukan Manufaktur : ";
            std::getline(std::cin, tempS);
            tempD.setManufaktur(tempS);

            std::cout << "Masukan Kondisi : ";
            std::getline(std::cin, tempS);
            tempD.setKondisi(tempS);

            std::cout << "Masukan Resolusi : ";
            std::getline(std::cin, tempS);
            tempD.setResolusi(tempS);

            std::cout << "Masukan Ukuran(Inch) : ";
            std::cin >> tempI;
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // clear newline
            tempD.setUkuran(tempI);

            std::cout << "Masukan Tipe Panel : ";
            std::getline(std::cin, tempS);
            tempD.setTipePanel(tempS);

            std::cout << "Masukan Aspek Ratio : ";
            std::getline(std::cin, tempS);
            tempD.setAspekRatio(tempS);

            listDisplay.push_back(tempD);
            std::cout << "Data berhasil dimasukan." << std::endl;
        }
        else if (input == "EXIT")
        {
            flag = 1;
        }
        else if (input == "HELP")
        {
            help();
        }
        else if (input == "")
        {
            
        }
        else
        {
            std::cout << "Command not found. Use \"HELP\" " << std::endl;
        }
    }
}

void printDisplay(Display input)
{
    std::cout << "ID : " << input.getId() << std::endl;
    std::cout << "Nama : " << input.getNama() << std::endl;
    std::cout << "Harga : " << input.getHarga() << std::endl;
    std::cout << "Stok : " << input.getStok() << std::endl;
    std::cout << "No Part : " << input.getNoPart() << std::endl;
    std::cout << "Manufaktur : " << input.getManufaktur() << std::endl;
    std::cout << "Kondisi : " << input.getKondisi() << std::endl;
    std::cout << "Resolusi : " << input.getResolusi() << std::endl;
    std::cout << "Ukuran : " << input.getUkuran() << std::endl;
    std::cout << "Tipe Panel : " << input.getTipePanel() << std::endl;
    std::cout << "Aspek Ratio : " << input.getAspekRatio() << std::endl;
}

void printDisplayTable(const std::vector<Display> &listDisplay)
{
    if (listDisplay.empty()) {
        std::cout << "Tidak ada data Display.\n";
        return;
    }

    // ==== Hitung lebar kolom dinamis ====
    size_t wId = 2, wNama = 4, wHarga = 5, wStok = 4;
    size_t wNoPart = 7, wManufaktur = 10, wKondisi = 7;
    size_t wResolusi = 8, wUkuran = 6, wTipePanel = 10, wAspek = 5;

    for (const auto &d : listDisplay) {
        wId         = std::max(wId,         std::to_string(d.getId()).size());
        wNama       = std::max(wNama,       d.getNama().size());
        wHarga      = std::max(wHarga,      std::to_string(d.getHarga()).size());
        wStok       = std::max(wStok,       std::to_string(d.getStok()).size());
        wNoPart     = std::max(wNoPart,     d.getNoPart().size());
        wManufaktur = std::max(wManufaktur, d.getManufaktur().size());
        wKondisi    = std::max(wKondisi,    d.getKondisi().size());
        wResolusi   = std::max(wResolusi,   d.getResolusi().size());
        wUkuran     = std::max(wUkuran,     std::to_string(d.getUkuran()).size());
        wTipePanel  = std::max(wTipePanel,  d.getTipePanel().size());
        wAspek      = std::max(wAspek,      d.getAspekRatio().size());
    }

    // ==== Cetak header ====
    auto sep = [&](size_t w){ std::cout << '+' << std::string(w + 2, '-'); };
    sep(wId); sep(wNama); sep(wHarga); sep(wStok); sep(wNoPart); sep(wManufaktur);
    sep(wKondisi); sep(wResolusi); sep(wUkuran); sep(wTipePanel); sep(wAspek);
    std::cout << "+\n";

    std::cout << "| " << std::left
              << std::setw(wId)         << "ID"         << " | "
              << std::setw(wNama)       << "Nama"       << " | "
              << std::setw(wHarga)      << "Harga"      << " | "
              << std::setw(wStok)       << "Stok"       << " | "
              << std::setw(wNoPart)     << "NoPart"     << " | "
              << std::setw(wManufaktur) << "Manufaktur" << " | "
              << std::setw(wKondisi)    << "Kondisi"    << " | "
              << std::setw(wResolusi)   << "Resolusi"   << " | "
              << std::setw(wUkuran)     << "Ukuran"     << " | "
              << std::setw(wTipePanel)  << "TipePanel"  << " | "
              << std::setw(wAspek)      << "Aspek"      << " |\n";

    sep(wId); sep(wNama); sep(wHarga); sep(wStok); sep(wNoPart); sep(wManufaktur);
    sep(wKondisi); sep(wResolusi); sep(wUkuran); sep(wTipePanel); sep(wAspek);
    std::cout << "+\n";

    // ==== Cetak isi tabel ====
    for (const auto &d : listDisplay) {
        std::cout << "| " << std::left
                  << std::setw(wId)         << d.getId()         << " | "
                  << std::setw(wNama)       << d.getNama()       << " | "
                  << std::setw(wHarga)      << d.getHarga()      << " | "
                  << std::setw(wStok)       << d.getStok()       << " | "
                  << std::setw(wNoPart)     << d.getNoPart()     << " | "
                  << std::setw(wManufaktur) << d.getManufaktur() << " | "
                  << std::setw(wKondisi)    << d.getKondisi()    << " | "
                  << std::setw(wResolusi)   << d.getResolusi()   << " | "
                  << std::setw(wUkuran)     << d.getUkuran()     << " | "
                  << std::setw(wTipePanel)  << d.getTipePanel()  << " | "
                  << std::setw(wAspek)      << d.getAspekRatio() << " |\n";
    }

    // Garis penutup
    sep(wId); sep(wNama); sep(wHarga); sep(wStok); sep(wNoPart); sep(wManufaktur);
    sep(wKondisi); sep(wResolusi); sep(wUkuran); sep(wTipePanel); sep(wAspek);
    std::cout << "+\n";
}

void clearScreen()
{
    #ifdef _WIN32
    system("cls");   // Windows
    #else
    system("clear"); // Linux / macOS
    #endif
}

void welcome()
{
    std::cout << "=====================" << std::endl;
    std::cout << "=      Welcome      =" << std::endl;
    std::cout << "=====================" << std::endl;
}

void help()
{
    std::cout << "SHOW" << std::endl;
    std::cout << "  Untuk menampilkan semua data" << std::endl;
    std::cout << "ADD" << std::endl;
    std::cout << "  Untuk menambahkan data" << std::endl;
    std::cout << "HELP" << std::endl;
    std::cout << "  Untuk menampilkan semua command" << std::endl;
    std::cout << "EXIT" << std::endl;
    std::cout << "  Untuk keluar dari aplikasi" << std::endl;
}