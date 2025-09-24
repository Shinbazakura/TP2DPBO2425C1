<?php
require_once 'PartLaptop.php';

class Display extends PartLaptop {
    private string $resolusi;
    private int $ukuran;
    private string $tipePanel;
    private string $aspekRatio;

    public function __construct(
        int $id = 0, string $nama = "", int $harga = 0, int $stok = 0,
        string $noPart = "", string $manufaktur = "", string $kondisi = "",
        string $resolusi = "", int $ukuran = 0, string $tipePanel = "", string $aspekRatio = ""
    ) {
        parent::__construct($id, $nama, $harga, $stok, $noPart, $manufaktur, $kondisi);
        $this->resolusi = $resolusi;
        $this->ukuran = $ukuran;
        $this->tipePanel = $tipePanel;
        $this->aspekRatio = $aspekRatio;
    }

    public function getResolusi(): string { return $this->resolusi; }
    public function setResolusi(string $resolusi) { $this->resolusi = $resolusi; }

    public function getUkuran(): int { return $this->ukuran; }
    public function setUkuran(int $ukuran) { $this->ukuran = $ukuran; }

    public function getTipePanel(): string { return $this->tipePanel; }
    public function setTipePanel(string $tipePanel) { $this->tipePanel = $tipePanel; }

    public function getAspekRatio(): string { return $this->aspekRatio; }
    public function setAspekRatio(string $aspekRatio) { $this->aspekRatio = $aspekRatio; }
}
