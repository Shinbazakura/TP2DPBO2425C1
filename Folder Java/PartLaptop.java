public class PartLaptop extends Barang {
    private String noPart;
    private String manufaktur;
    private String kondisi;

    public PartLaptop() {
        super();
        this.noPart = "";
        this.manufaktur = "";
        this.kondisi = "";
    }

    public PartLaptop(int id, String nama, int harga, int stok,
                      String noPart, String manufaktur, String kondisi) {
        super(id, nama, harga, stok);
        this.noPart = noPart;
        this.manufaktur = manufaktur;
        this.kondisi = kondisi;
    }

    public String getNoPart() { return noPart; }
    public void setNoPart(String noPart) { this.noPart = noPart; }

    public String getManufaktur() { return manufaktur; }
    public void setManufaktur(String manufaktur) { this.manufaktur = manufaktur; }

    public String getKondisi() { return kondisi; }
    public void setKondisi(String kondisi) { this.kondisi = kondisi; }
}
