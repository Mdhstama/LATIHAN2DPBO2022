<?php

class Memory extends Hardware
{
    /* class memory adalah child dari class hardware */

    /* atribut privat */
    private $frecuency,
        $memorySize,
        $supportsCuda;

    /* membuat constructor */
    public function __construct()
    {
        $this->frecuency = "";
        $this->memorySize = "";
        $this->supportsCuda = "";
    }

    /* Get-Set Methods frequency */
    public function setFrecuency($frecuency)
    {
        $this->frecuency = $frecuency;
    }

    public function getFrecuency()
    {
        return $this->frecuency;
    }

    /* Get-Set Methods memorySize */
    public function setMemorySize($memorySize)
    {
        $this->memorySize = $memorySize;
    }

    public function getMemorySize()
    {
        return $this->memorySize;
    }

    /* Get-Set Methods supportsCuda */
    public function setSupportsCuda($supportsCuda)
    {
        $this->supportsCuda = $supportsCuda;
    }

    public function getSupportsCuda()
    {
        return $this->supportsCuda;
    }

    /* membuat desturctor */
    public function __destruct()
    {
    }
}
