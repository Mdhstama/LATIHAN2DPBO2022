<?php

class Hardware extends Product
{
    /* class hardware adalah child dari class product */

    /* atribut privat */
    private $brand,
        $model;

    /* membuat constructor */
    public function __construct()
    {
        $this->brand = "";
        $this->model = "";
    }

    /* Get-Set Methods brand */
    public function setBrand($brand)
    {
        $this->brand = $brand;
    }

    public function getBrand()
    {
        return $this->brand;
    }

    /* Get-Set Methods model */
    public function setModel($model)
    {
        $this->model = $model;
    }

    public function getModel()
    {
        return $this->model;
    }

    /* membuat desturctor */
    public function __destruct()
    {
    }
}
