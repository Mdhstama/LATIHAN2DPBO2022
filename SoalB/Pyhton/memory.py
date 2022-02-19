from hardware import hardware


class memory(hardware):
    # class memory adalah child dari class hardware

    # atribut privat
    __frequency = 0
    __memorySize = 0
    __supportsCuda = ""

    # membuat constructor
    def __init__(self):
        self.__frequency = 0
        self.__memorySize = 0
        self.__supportsCuda = ""

    # get-set methods frequency
    def setFrequency(self, frequency):
        self.__frequency = frequency

    def getFrequency(self):
        return self.__frequency

    # get-set methods memorySize
    def setMemory(self, memorySize):
        self.__memorySize = memorySize

    def getMemory(self):
        return self.__memorySize

    # get-set methods supportsCuda
    def setCuda(self, supportsCuda):
        self.__supportsCuda = supportsCuda

    def getCuda(self):
        return self.__supportsCuda
