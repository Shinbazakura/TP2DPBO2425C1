<?php
class Barang {
    private int $id;
    private string $nama;
    private int $harga;
    private int $stok;

    public function __construct(int $id = 0, string $nama = "", int $harga = 0, int $stok = 0) {
        $this->id = $id;
        $this->nama = $nama;
        $this->harga = $harga;
        $this->stok = $stok;
    }

    public function getId(): int { return $this->id; }
    public function setId(int $id) { $this->id = $id; }

    public function getNama(): string { return $this->nama; }
    public function setNama(string $nama) { $this->nama = $nama; }

    public function getHarga(): int { return $this->harga; }
    public function setHarga(int $harga) { $this->harga = $harga; }

    public function getStok(): int { return $this->stok; }
    public function setStok(int $stok) { $this->stok = $stok; }
}
