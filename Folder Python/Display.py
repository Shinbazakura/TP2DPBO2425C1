from PartLaptop import PartLaptop

class Display(PartLaptop):
    def __init__(self,
                 id=0, nama="", harga=0, stok=0,
                 no_part="", manufaktur="", kondisi="",
                 resolusi="", ukuran=0,
                 tipe_panel="", aspek_ratio=""):
        super().__init__(id, nama, harga, stok, no_part, manufaktur, kondisi)
        self._resolusi = resolusi
        self._ukuran = ukuran
        self._tipe_panel = tipe_panel
        self._aspek_ratio = aspek_ratio

    @property
    def resolusi(self): return self._resolusi
    @resolusi.setter
    def resolusi(self, v): self._resolusi = v

    @property
    def ukuran(self): return self._ukuran
    @ukuran.setter
    def ukuran(self, v): self._ukuran = v

    @property
    def tipe_panel(self): return self._tipe_panel
    @tipe_panel.setter
    def tipe_panel(self, v): self._tipe_panel = v

    @property
    def aspek_ratio(self): return self._aspek_ratio
    @aspek_ratio.setter
    def aspek_ratio(self, v): self._aspek_ratio = v
