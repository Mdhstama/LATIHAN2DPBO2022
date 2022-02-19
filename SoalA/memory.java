public class memory extends hardware {
    /* class memory adalah child dari class hardware */

    /* atribut privat */
    private int frequency;
    private int memorySize;
    private String supportsCuda;

    /* membuat constructor */
    public memory(int frequency, int memorySize, String supportsCuda) {
        this.frequency = frequency;
        this.memorySize = memorySize;
        this.supportsCuda = supportsCuda;
    }

    public memory() {

    }

    /* Get-Set Methods frequency */
    public void setFrequency(int frequency) {
        this.frequency = frequency;
    }

    public int getFrequency() {
        return frequency;
    }

    /* Get-Set Methods memorySize */
    public void setMemory(int memorySize) {
        this.memorySize = memorySize;
    }

    public int getMemory() {
        return memorySize;
    }

    /* Get-Set Methods supportsCuda */
    public void setCuda(String supportsCuda) {
        this.supportsCuda = supportsCuda;
    }

    public String getCuda() {
        return supportsCuda;
    }
}
