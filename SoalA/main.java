public class main {
    public static void main(String[] args) {

        /* inisialisasi objek */
        memory VGA = new memory();

        /* memasukan data input */
        VGA.setID("AMD0001");
        VGA.setPrice("IDR 8.250.000");
        VGA.setModel("RX 6700 XT");
        VGA.setBrand("ASUS Radeon");
        VGA.setFrequency(2581);
        VGA.setMemory(12);
        VGA.setCuda("No");

        /* output */
        System.out.println("JAVA Languange");
        System.out.println("-----------------------");
        System.out.println("Product Detail");
        System.out.println("-----------------------");
        System.out.println("ID Product          : " + VGA.getID());
        System.out.println("Price (IDR)         : " + VGA.getPrice());
        System.out.println("-----------------------");
        System.out.println("Hardware Detail");
        System.out.println("-----------------------");
        System.out.println("Brand               : " + VGA.getBrand());
        System.out.println("Model               : " + VGA.getModel());
        System.out.println("-----------------------");
        System.out.println("Memory Detail");
        System.out.println("-----------------------");
        System.out.println("Frequency (MHz)     : " + VGA.getFrequency());
        System.out.println("Memory Size (GB)    : " + VGA.getMemory());
        System.out.println("Supports Cuda (Y/N) : " + VGA.getCuda());
        System.out.println("-----------------------");
    }
}
