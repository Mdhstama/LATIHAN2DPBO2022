#include "memory.cpp"

int main()
{
    /* deklarasi variabel */
    int n = 2;
    int i;

    /* inisialisasi array objek */
    memory VGA[n];

    /* memasukan data input */
    VGA[0].setID("AMD0001");
    VGA[0].setPrice("IDR 8.250.000");
    VGA[0].setModel("RX 6700 XT");
    VGA[0].setBrand("ASUS Radeon");
    VGA[0].setFrequency(2581);
    VGA[0].setMemory(12);
    VGA[0].setCuda("No");

    VGA[1].setID("NV0001");
    VGA[1].setPrice("IDR 52.000.000");
    VGA[1].setModel("RTX 3090Ti");
    VGA[1].setBrand("MSI Gaming Trio");
    VGA[1].setFrequency(1860);
    VGA[1].setMemory(24);
    VGA[1].setCuda("Yes");

    /* output */
    for (i = 0; i < n; i++)
    {
        cout << "C++ Languange" << endl;
        cout << "-----------------------" << endl;
        cout << "Product Detail " << i + 1 << endl;
        cout << "-----------------------" << endl;
        cout << "ID Product          : " << VGA[i].getID() << endl;
        cout << "Price (IDR)         : " << VGA[i].getPrice() << endl;
        cout << "-----------------------" << endl;
        cout << "Hardware Detail " << i + 1 << endl;
        cout << "-----------------------" << endl;
        cout << "Brand               : " << VGA[i].getBrand() << endl;
        cout << "Model               : " << VGA[i].getModel() << endl;
        cout << "-----------------------" << endl;
        cout << "Memory Detail " << i + 1 << endl;
        cout << "-----------------------" << endl;
        cout << "Frequency (MHz)     : " << VGA[i].getFrequency() << endl;
        cout << "Memory Size (GB)    : " << VGA[i].getMemory() << endl;
        cout << "Supports Cuda (Y/N) : " << VGA[i].getCuda() << endl;
        cout << "-----------------------" << endl;
        cout << "\n";
    }

    /* menghentikan operasi */
    return 0;
}