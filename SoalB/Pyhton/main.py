from memory import memory

# banyaknya array
n = 2

# inisialisasi array objek
VGA = [memory() for i in range(n)]

# memasukan data input
VGA[0].setID("AMD0001")
VGA[0].setPrice("IDR 8.250.000")
VGA[0].setModel("RX 6700 XT")
VGA[0].setBrand("ASUS Radeon")
VGA[0].setFrequency(2581)
VGA[0].setMemory(12)
VGA[0].setCuda("No")

VGA[1].setID("NV0001")
VGA[1].setPrice("IDR 52.000.000")
VGA[1].setModel("RTX 3090Ti")
VGA[1].setBrand("MSI Gaming Trio")
VGA[1].setFrequency(1860)
VGA[1].setMemory(24)
VGA[1].setCuda("Yes")

# output
for i in range(n):
    print("Pyhton Languange")
    print("-----------------------")
    print("Product Detail")
    print("-----------------------")
    print("ID Product          :  " + str(VGA[i].getID()))
    print("Price (IDR)         :  " + str(VGA[i].getPrice()))
    print("-----------------------")
    print("Hardware Detail")
    print("-----------------------")
    print("Brand               : " + str(VGA[i].getBrand()))
    print("Model               : " + str(VGA[i].getModel()))
    print("-----------------------")
    print("Memory Detail")
    print("-----------------------")
    print("Frequency (MHz)     : " + str(VGA[i].getFrequency()))
    print("Memory Size (GB)    : " + str(VGA[i].getMemory()))
    print("Supports Cuda (Y/N) : " + str(VGA[i].getCuda()))
    print("-----------------------")
    print("")
