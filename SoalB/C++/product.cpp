#include <string>
#include <iostream>

using namespace std;

class product
{
    /* product adalah parent dari semua class */

    /* atribut privat */
private:
    string idProduct;
    string price;

public:
    /* membuat constructor */
    product()
    {
    }

    /* Get-Set Methods idProduct */
    void setID(string idProduct)
    {
        this->idProduct = idProduct;
    }
    string getID()
    {
        return this->idProduct;
    }

    /* Get-Set Methods price */
    void setPrice(string price)
    {
        this->price = price;
    }
    string getPrice()
    {
        return this->price;
    }

    /* membuat destructor */
    ~product()
    {
    }
};
