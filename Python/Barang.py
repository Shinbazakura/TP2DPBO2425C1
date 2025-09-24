class Barang:
    def __init__(self, id=0, nama="", harga=0, stok=0):
        self._id = id
        self._nama = nama
        self._harga = harga
        self._stok = stok

    # getters & setters
    @property
    def id(self): return self._id
    @id.setter
    def id(self, value): self._id = value

    @property
    def nama(self): return self._nama
    @nama.setter
    def nama(self, value): self._nama = value

    @property
    def harga(self): return self._harga
    @harga.setter
    def harga(self, value): self._harga = value

    @property
    def stok(self): return self._stok
    @stok.setter
    def stok(self, value): self._stok = value
