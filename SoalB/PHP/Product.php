<?php

class Product
{
    /* product adalah parent dari semua class */

    /* atribut privat */
    private $price,
        $idProduct;

    /* membuat constructor */
    public function __construct()
    {
        $this->price = "";
        $this->idProduct = "";
    }

    /* Get-Set Methods price */
    public function setPrice($price)
    {
        $this->price = $price;
    }

    public function getPrice()
    {
        return $this->price;
    }

    /* Get-Set Methods idProduct */
    public function setIdProduct($idProduct)
    {
        $this->idProduct = $idProduct;
    }

    public function getIdProduct()
    {
        return $this->idProduct;
    }

    public function __destruct()
    {
    }
}
