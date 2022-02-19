class product():
    # product adalah parent dari semua class

    # atribut private
    __idProduct = ""
    __price = ""

    # membuat constructor
    def __init__(self):
        self.__idProduct = ""
        self.__price = ""

    # get-set methods idProduct
    def setID(self, idProduct):
        self.__idProduct = idProduct

    def getID(self):
        return self.__idProduct

    # get-set methods price
    def setPrice(self, price):
        self.__price = price

    def getPrice(self):
        return self.__price
