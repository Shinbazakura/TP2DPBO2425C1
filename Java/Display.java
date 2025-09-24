public class Display extends PartLaptop {
    private String resolusi;
    private int ukuran;
    private String tipePanel;
    private String aspekRatio;

    public Display() {
        super();
        this.resolusi = "";
        this.ukuran = 0;
        this.tipePanel = "";
        this.aspekRatio = "";
    }

    public Display(int id, String nama, int harga, int stok,
                   String noPart, String manufaktur, String kondisi,
                   String resolusi, int ukuran,
                   String tipePanel, String aspekRatio) {
        super(id, nama, harga, stok, noPart, manufaktur, kondisi);
        this.resolusi = resolusi;
        this.ukuran = ukuran;
        this.tipePanel = tipePanel;
        this.aspekRatio = aspekRatio;
    }

    public String getResolusi() { return resolusi; }
    public void setResolusi(String resolusi) { this.resolusi = resolusi; }

    public int getUkuran() { return ukuran; }
    public void setUkuran(int ukuran) { this.ukuran = ukuran; }

    public String getTipePanel() { return tipePanel; }
    public void setTipePanel(String tipePanel) { this.tipePanel = tipePanel; }

    public String getAspekRatio() { return aspekRatio; }
    public void setAspekRatio(String aspekRatio) { this.aspekRatio = aspekRatio; }
}
