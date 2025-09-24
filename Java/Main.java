import java.util.*;

public class Main {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        List<Display> listDisplay = new ArrayList<>();

        // Data awal
        listDisplay.add(new Display(1,"AUO B140HAN01.3 14 inch FHD IPS",1350000,6,
                "B140HAN01.3","AU Optronics","Baru","1920x1080",14,"IPS","16:9"));
        listDisplay.add(new Display(2,"LG LP156UD1-SPB1 15.6 inch 4K IPS",3300000,3,
                "LP156UD1-SPB1","LG Display","Baru","3840x2160",15,"IPS","16:9"));
        listDisplay.add(new Display(3,"Samsung LTN133YL01-L01 13.3 inch QHD+",2850000,4,
                "LTN133YL01-L01","Samsung","Baru","3200x1800",13,"PLS","16:9"));
        listDisplay.add(new Display(4,"BOE NV156FHM-N4B 15.6 inch FHD 144 Hz",2500000,5,
                "NV156FHM-N4B","BOE","Baru","1920x1080",15,"IPS 144Hz","16:9"));
        listDisplay.add(new Display(5,"Innolux N173HCE-E31 17.3 inch FHD IPS",2700000,2,
                "N173HCE-E31","Innolux","Baru","1920x1080",17,"IPS","16:9"));
        listDisplay.add(new Display(6,"Sharp LQ156R1JW02 15.6 inch 4K IGZO",3900000,2,
                "LQ156R1JW02","Sharp","Baru","3840x2400",15,"IGZO IPS","16:10"));
        listDisplay.add(new Display(7,"BOE NE160QDM-NY1 16 inch 2.5K 165 Hz",3800000,2,
                "NE160QDM-NY1","BOE","Baru","2560x1600",16,"IPS 165 Hz","16:10"));

        clearScreen();
        welcome();

        while (true) {
            System.out.print(">");
            String input = sc.nextLine().trim().toUpperCase();

            switch (input) {
                case "SHOW":
                    printDisplayTable(listDisplay);
                    break;
                case "ADD":
                    addDisplay(sc, listDisplay);
                    break;
                case "HELP":
                    help();
                    break;
                case "EXIT":
                    return;
                case "":
                    break;
                default:
                    System.out.println("Command not found. Use \"HELP\"");
            }
        }
    }

    private static void addDisplay(Scanner sc, List<Display> listDisplay) {
        Display d = new Display();
        System.out.print("Masukan ID : ");
        d.setId(Integer.parseInt(sc.nextLine()));

        System.out.print("Masukan Nama : ");
        d.setNama(sc.nextLine());

        System.out.print("Masukan Harga : ");
        d.setHarga(Integer.parseInt(sc.nextLine()));

        System.out.print("Masukan Stok : ");
        d.setStok(Integer.parseInt(sc.nextLine()));

        System.out.print("Masukan No Part : ");
        d.setNoPart(sc.nextLine());

        System.out.print("Masukan Manufaktur : ");
        d.setManufaktur(sc.nextLine());

        System.out.print("Masukan Kondisi : ");
        d.setKondisi(sc.nextLine());

        System.out.print("Masukan Resolusi : ");
        d.setResolusi(sc.nextLine());

        System.out.print("Masukan Ukuran(Inch) : ");
        d.setUkuran(Integer.parseInt(sc.nextLine()));

        System.out.print("Masukan Tipe Panel : ");
        d.setTipePanel(sc.nextLine());

        System.out.print("Masukan Aspek Ratio : ");
        d.setAspekRatio(sc.nextLine());

        listDisplay.add(d);
        System.out.println("Data berhasil dimasukan.");
    }

    private static void printDisplayTable(List<Display> list) {
        if (list.isEmpty()) {
            System.out.println("Tidak ada data Display.");
            return;
        }

        // Hitung lebar kolom
        int wId=2,wNama=4,wHarga=5,wStok=4,wNoPart=7,wManufaktur=10,
            wKondisi=7,wResolusi=8,wUkuran=6,wTipePanel=10,wAspek=5;

        for (Display d : list) {
            wId = Math.max(wId, String.valueOf(d.getId()).length());
            wNama = Math.max(wNama, d.getNama().length());
            wHarga = Math.max(wHarga, String.valueOf(d.getHarga()).length());
            wStok = Math.max(wStok, String.valueOf(d.getStok()).length());
            wNoPart = Math.max(wNoPart, d.getNoPart().length());
            wManufaktur = Math.max(wManufaktur, d.getManufaktur().length());
            wKondisi = Math.max(wKondisi, d.getKondisi().length());
            wResolusi = Math.max(wResolusi, d.getResolusi().length());
            wUkuran = Math.max(wUkuran, String.valueOf(d.getUkuran()).length());
            wTipePanel = Math.max(wTipePanel, d.getTipePanel().length());
            wAspek = Math.max(wAspek, d.getAspekRatio().length());
        }

        String format = "| %-" + wId + "s | %-" + wNama + "s | %-" + wHarga + "s | %-" + wStok + "s | %-" +
                wNoPart + "s | %-" + wManufaktur + "s | %-" + wKondisi + "s | %-" + wResolusi + "s | %-" +
                wUkuran + "s | %-" + wTipePanel + "s | %-" + wAspek + "s |\n";

        String sep = "+" + "-".repeat(wId+2) + "+" + "-".repeat(wNama+2) + "+" + "-".repeat(wHarga+2) + "+"
                + "-".repeat(wStok+2) + "+" + "-".repeat(wNoPart+2) + "+" + "-".repeat(wManufaktur+2) + "+"
                + "-".repeat(wKondisi+2) + "+" + "-".repeat(wResolusi+2) + "+" + "-".repeat(wUkuran+2) + "+"
                + "-".repeat(wTipePanel+2) + "+" + "-".repeat(wAspek+2) + "+";

        System.out.println(sep);
        System.out.printf(format,"ID","Nama","Harga","Stok","NoPart","Manufaktur","Kondisi","Resolusi","Ukuran","TipePanel","Aspek");
        System.out.println(sep);

        for (Display d : list) {
            System.out.printf(format, d.getId(), d.getNama(), d.getHarga(), d.getStok(),
                    d.getNoPart(), d.getManufaktur(), d.getKondisi(), d.getResolusi(),
                    d.getUkuran(), d.getTipePanel(), d.getAspekRatio());
        }
        System.out.println(sep);
    }

    private static void clearScreen() {
        try {
            if (System.getProperty("os.name").toLowerCase().contains("win"))
                new ProcessBuilder("cmd","/c","cls").inheritIO().start().waitFor();
            else
                System.out.print("\033[H\033[2J");
        } catch (Exception e) {
            // abaikan
        }
    }

    private static void welcome() {
        System.out.println("=====================");
        System.out.println("=      Welcome      =");
        System.out.println("=====================");
    }

    private static void help() {
        System.out.println("SHOW");
        System.out.println("  Untuk menampilkan semua data");
        System.out.println("ADD");
        System.out.println("  Untuk menambahkan data");
        System.out.println("HELP");
        System.out.println("  Untuk menampilkan semua command");
        System.out.println("EXIT");
        System.out.println("  Untuk keluar dari aplikasi");
    }
}