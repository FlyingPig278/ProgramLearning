import java.lang.management.ManagementFactory;
import java.lang.management.MemoryMXBean;

public class MemoryUsage {
    public static void printMemoryUsage() {
        MemoryMXBean memoryMXBean = ManagementFactory.getMemoryMXBean();

        // 打印堆内存使用情况
        System.out.println("Heap Memory Usage: " + memoryMXBean.getHeapMemoryUsage());

        // 打印非堆内存使用情况
        System.out.println("Non-Heap Memory Usage: " + memoryMXBean.getNonHeapMemoryUsage());
    }
}
