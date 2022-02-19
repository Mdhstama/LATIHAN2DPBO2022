public class hardware extends product {
    /* class hardware adalah child dari class product */

    /* atribut privat */
    private String model;
    private String brand;

    /* membuat constructor */
    public hardware(String model, String brand) {
        this.model = model;
        this.brand = brand;
    }

    public hardware() {

    }

    /* Get-Set Methods model */
    public void setModel(String model) {
        this.model = model;
    }

    public String getModel() {
        return model;
    }

    /* Get-Set Methods brand */
    public void setBrand(String brand) {
        this.brand = brand;
    }

    public String getBrand() {
        return brand;
    }
}
