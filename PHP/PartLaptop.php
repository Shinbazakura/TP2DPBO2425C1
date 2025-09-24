<?php
require_once 'Barang.php';

class PartLaptop extends Barang {
    private string $noPart;
    private string $manufaktur;
    private string $kondisi;

    public function __construct(
        int $id = 0, string $nama = "", int $harga = 0, int $stok = 0, string $gambar = "",
        string $noPart = "", string $manufaktur = "", string $kondisi = ""
    ) {
        parent::__construct($id, $nama, $harga, $stok, $gambar);
        $this->noPart = $noPart;
        $this->manufaktur = $manufaktur;
        $this->kondisi = $kondisi;
    }

    public function getNoPart(): string { return $this->noPart; }
    public function setNoPart(string $noPart) { $this->noPart = $noPart; }

    public function getManufaktur(): string { return $this->manufaktur; }
    public function setManufaktur(string $manufaktur) { $this->manufaktur = $manufaktur; }

    public function getKondisi(): string { return $this->kondisi; }
    public function setKondisi(string $kondisi) { $this->kondisi = $kondisi; }
}
