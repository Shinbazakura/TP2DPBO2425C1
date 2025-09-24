from Barang import Barang

class PartLaptop(Barang):
    def __init__(self,
                 id=0, nama="", harga=0, stok=0,
                 no_part="", manufaktur="", kondisi=""):
        super().__init__(id, nama, harga, stok)
        self._no_part = no_part
        self._manufaktur = manufaktur
        self._kondisi = kondisi

    @property
    def no_part(self): return self._no_part
    @no_part.setter
    def no_part(self, v): self._no_part = v

    @property
    def manufaktur(self): return self._manufaktur
    @manufaktur.setter
    def manufaktur(self, v): self._manufaktur = v

    @property
    def kondisi(self): return self._kondisi
    @kondisi.setter
    def kondisi(self, v): self._kondisi = v
