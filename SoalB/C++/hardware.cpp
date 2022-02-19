#include "product.cpp"

class hardware : public product
{
    /* class hardware adalah child dari class product */

    /* atribut privat */
private:
    string model;
    string brand;

public:
    /* membuat constructor */
    hardware()
    {
    }

    /* Get-Set Methods model */
    void setModel(string model)
    {
        this->model = model;
    }
    string getModel()
    {
        return this->model;
    }

    /* Get-Set Methods brand */
    void setBrand(string brand)
    {
        this->brand = brand;
    }
    string getBrand()
    {
        return this->brand;
    }

    /* membuat destructor */
    ~hardware()
    {
    }
};