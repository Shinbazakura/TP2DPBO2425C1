<?php
class Barang {
    private int $id = 0;
    private string $nama = "";
    private int $harga = 0;
    private int $stok = 0;
    private string $gambar = "";

    public function __construct(int $id = 0, string $nama = "", int $harga = 0, int $stok = 0, string $gambar = "") {
        $this->id = $id;
        $this->nama = $nama;
        $this->harga = $harga;
        $this->stok = $stok;
        $this->gambar = $gambar;
    }

    public function getId(): int { return $this->id; }
    public function setId(int $id) { $this->id = $id; }

    public function getNama(): string { return $this->nama; }
    public function setNama(string $nama) { $this->nama = $nama; }

    public function getHarga(): int { return $this->harga; }
    public function setHarga(int $harga) { $this->harga = $harga; }

    public function getStok(): int { return $this->stok; }
    public function setStok(int $stok) { $this->stok = $stok; }

    public function getGambar(): string { return $this->gambar; }
    public function setGambar(string $gambar) { $this->gambar = $gambar; }
}
