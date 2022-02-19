from product import product


class hardware(product):
    # class hardware adalah child dari class product

    # atribut private
    __model = ""
    __brand = ""

    # membuat constructor
    def __init__(self):
        self.__model = ""
        self.__brand = ""

    # get-set methods model
    def setModel(self, model):
        self.__model = model

    def getModel(self):
        return self.__model

    # get-set methods brand
    def setBrand(self, brand):
        self.__brand = brand

    def getBrand(self):
        return self.__brand
