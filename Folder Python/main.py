from Display import Display
import os

def clear_screen():
    os.system("cls" if os.name == "nt" else "clear")

def welcome():
    print("=====================")
    print("=      Welcome      =")
    print("=====================")

def help_menu():
    print("SHOW  : Tampilkan semua data")
    print("ADD   : Tambahkan data")
    print("HELP  : Lihat semua command")
    print("EXIT  : Keluar aplikasi")

def print_display(d: Display):
    print(f"ID : {d.id}")
    print(f"Nama : {d.nama}")
    print(f"Harga : {d.harga}")
    print(f"Stok : {d.stok}")
    print(f"No Part : {d.no_part}")
    print(f"Manufaktur : {d.manufaktur}")
    print(f"Kondisi : {d.kondisi}")
    print(f"Resolusi : {d.resolusi}")
    print(f"Ukuran : {d.ukuran}")
    print(f"Tipe Panel : {d.tipe_panel}")
    print(f"Aspek Ratio : {d.aspek_ratio}")

def print_display_table(data):
    if not data:
        print("Tidak ada data Display.")
        return

    # determine column widths
    headers = ["ID","Nama","Harga","Stok","NoPart","Manufaktur",
               "Kondisi","Resolusi","Ukuran","TipePanel","Aspek"]
    rows = [
        [d.id, d.nama, d.harga, d.stok, d.no_part, d.manufaktur,
         d.kondisi, d.resolusi, d.ukuran, d.tipe_panel, d.aspek_ratio]
        for d in data
    ]
    widths = [max(len(str(col)) for col in [h]+[r[i] for r in rows])
              for i, h in enumerate(headers)]

    def line():
        print('+' + '+'.join('-'*(w+2) for w in widths) + '+')

    line()
    print('| ' + ' | '.join(h.ljust(widths[i]) for i,h in enumerate(headers)) + ' |')
    line()
    for r in rows:
        print('| ' + ' | '.join(str(r[i]).ljust(widths[i]) for i in range(len(headers))) + ' |')
    line()

def main():
    list_display = [
        Display(1,"AUO B140HAN01.3 14 inch FHD IPS",1350000,6,
                "B140HAN01.3","AU Optronics","Baru","1920x1080",14,"IPS","16:9"),
        Display(2,"LG LP156UD1-SPB1 15.6 inch 4K IPS",3300000,3,
                "LP156UD1-SPB1","LG Display","Baru","3840x2160",15,"IPS","16:9"),
        Display(3,"Samsung LTN133YL01-L01 13.3 inch QHD+",2850000,4,
                "LTN133YL01-L01","Samsung","Baru","3200x1800",13,"PLS","16:9"),
        Display(4,"BOE NV156FHM-N4B 15.6 inch FHD 144 Hz",2500000,5,
                "NV156FHM-N4B","BOE","Baru","1920x1080",15,"IPS 144Hz","16:9"),
        Display(5,"Innolux N173HCE-E31 17.3 inch FHD IPS",2700000,2,
                "N173HCE-E31","Innolux","Baru","1920x1080",17,"IPS","16:9"),
        Display(6,"Sharp LQ156R1JW02 15.6 inch 4K IGZO",3900000,2,
                "LQ156R1JW02","Sharp","Baru","3840x2400",15,"IGZO IPS","16:10"),
        Display(7,"BOE NE160QDM-NY1 16 inch 2.5K 165 Hz",3800000,2,
                "NE160QDM-NY1","BOE","Baru","2560x1600",16,"IPS 165 Hz","16:10")
    ]

    clear_screen()
    welcome()

    while True:
        cmd = input("> ").strip().upper()
        if cmd == "SHOW":
            print_display_table(list_display)
        elif cmd == "ADD":
            d = Display()
            d.id = int(input("Masukan ID : "))
            d.nama = input("Masukan Nama : ")
            d.harga = int(input("Masukan Harga : "))
            d.stok = int(input("Masukan Stok : "))
            d.no_part = input("Masukan No Part : ")
            d.manufaktur = input("Masukan Manufaktur : ")
            d.kondisi = input("Masukan Kondisi : ")
            d.resolusi = input("Masukan Resolusi : ")
            d.ukuran = int(input("Masukan Ukuran(Inch) : "))
            d.tipe_panel = input("Masukan Tipe Panel : ")
            d.aspek_ratio = input("Masukan Aspek Ratio : ")
            list_display.append(d)
            print("Data berhasil dimasukan.")
        elif cmd == "HELP":
            help_menu()
        elif cmd == "EXIT":
            break
        elif cmd == "":
            continue
        else:
            print('Command not found. Use "HELP"')

if __name__ == "__main__":
    main()
