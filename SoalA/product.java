public class product {
    /* product adalah parent dari semua class */

    /* atribut privat product */
    private String idProduct;
    private String price;

    /* membuat constructor */
    public product(String idProduct, String price) {
        this.idProduct = idProduct;
        this.price = price;
    }

    public product() {

    }

    /* Get-Set Methods idProduct */
    public void setID(String idProduct) {
        this.idProduct = idProduct;
    }

    public String getID() {
        return idProduct;
    }

    /* Get-Set Methods price */
    public void setPrice(String price) {
        this.price = price;
    }

    public String getPrice() {
        return price;
    }
}