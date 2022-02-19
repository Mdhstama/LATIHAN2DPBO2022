#include "hardware.cpp"

class memory : public hardware
{
    /* class memory adalah child dari class hardware */

    /* atribut privat */
private:
    int frequency;
    int memorySize;
    string supportsCuda;

public:
    /* membuat constructor */
    memory()
    {
    }

    /* Get-Set Methods frequency */
    void setFrequency(int frequency)
    {
        this->frequency = frequency;
    }
    int getFrequency()
    {
        return this->frequency;
    }

    /* Get-Set Methods memorySize */
    void setMemory(int memorySize)
    {
        this->memorySize = memorySize;
    }
    int getMemory()
    {
        return this->memorySize;
    }

    /* Get-Set Methods supportsCuda */
    void setCuda(string supportsCuda)
    {
        this->supportsCuda = supportsCuda;
    }
    string getCuda()
    {
        return this->supportsCuda;
    }

    /* membuat destructor */
    ~memory()
    {
    }
};