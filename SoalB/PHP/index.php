<?php

/* memanggil file */
require "Product.php";
require "Hardware.php";
require "Memory.php";

/* membuat objek */
$VGA = new Memory();

/* input data */
$VGA->setIdProduct("NV0001");
$VGA->setPrice("IDR 52.000.000");
$VGA->setModel("RTX 3090Ti");
$VGA->setBrand("MSI Gaming Trio");
$VGA->setFrecuency("1860");
$VGA->setMemorySize("24");
$VGA->setSupportsCuda("Yes");

/* output */
echo "PHP Languange" . "<br/>";
echo "-----------------------" . "<br/>";
echo "Product Detail "  . "<br/>";
echo "-----------------------" . "<br/>";
echo "ID Product          : " . $VGA->getIdProduct() . "<br/>";
echo "Price (IDR)         : " . $VGA->getPrice() . "<br/>";
echo "-----------------------" . "<br/>";
echo "Hardware Detail "  . "<br/>";
echo "-----------------------" . "<br/>";
echo "Brand               : " . $VGA->getBrand() . "<br/>";
echo "Model               : " . $VGA->getModel() . "<br/>";
echo "-----------------------" . "<br/>";
echo "Memory Detail "  . "<br/>";
echo "-----------------------" . "<br/>";
echo "Frequency (MHz)     : " . $VGA->getFrecuency() . "<br/>";
echo "Memory Size (GB)    : " . $VGA->getMemorySize() . "<br/>";
echo "Supports Cuda (Y/N) : " . $VGA->getSupportsCuda() . "<br/>";
echo "-----------------------" . "<br/>";
