// JavaGCExample.java
public class JavaGCExample {
    static class Node {
        // allocate significant memory to make heap visible in profilers
        int[] data = new int[100000];
    }

    public static void main(String[] args) throws InterruptedException {
        Node n1 = new Node();
        System.out.println("Created Node n1");
        // drop reference to make it eligible for GC
        n1 = null;
        System.out.println("Set n1 = null; requesting GC");
        System.gc(); // suggestion to the JVM to run GC
        // wait briefly so profiler can capture
        Thread.sleep(1000);
        System.out.println("Continuing after GC request");
    }
}
