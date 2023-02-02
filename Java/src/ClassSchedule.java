import java.awt.*;
import java.util.Calendar;
import java.util.concurrent.Executors;
import java.util.concurrent.ScheduledExecutorService;
import java.util.concurrent.TimeUnit;
import javax.swing.*;

public class ClassSchedule {
    public static void main(String[] args) {
        ScheduledExecutorService executor = Executors.newScheduledThreadPool(1);

        // 每分钟执行一次
        executor.scheduleAtFixedRate(MemoryUsage::printMemoryUsage, 0, 1, TimeUnit.MINUTES);
        while(true) {
            Calendar calendar = Calendar.getInstance();
            int hour = calendar.get(Calendar.HOUR_OF_DAY);
            int minute = calendar.get(Calendar.MINUTE);

            // 早读时间
            if (hour == 7 && minute == 28) {
                showReminder("It's time for morning reading.");
                break;
            }
            // 上午课程时间
            else if (hour >= 8 && hour < 12) {
                int classNumber = (hour - 8) * 2 + (minute >= 25 ? 1 : 0) + 1;
                showReminder("It's time for class " + classNumber + " in the morning.");
                break;
            }
            // 午休时间
            else if (hour == 13 && minute == 18) {
                showReminder("It's time for lunch break.");
                break;
            }
            // 下午课程时间
            else if (hour >= 14 && hour < 18) {
                int classNumber = (hour - 14) * 2 + (minute >= 45 ? 1 : 0) + 1;
                showReminder("It's time for class " + classNumber + " in the afternoon.");
                break;
            }
            // 晚自习时间
            else if (hour == 18 && minute == 18) {
                showReminder("It's time for evening self-study.");
                break;
            }
            else if (hour == 18 && minute == 41) {
                showReminder("It's time for evening self-study.");
                break;
            }
        }
    }

    private static void showReminder(String message) {
        Toolkit.getDefaultToolkit().beep();
        JOptionPane.showMessageDialog(null, message, "Class Schedule Reminder", JOptionPane.INFORMATION_MESSAGE);
        while (JOptionPane.showConfirmDialog(null, message, "Class Schedule Reminder", JOptionPane.OK_CANCEL_OPTION) == JOptionPane.CANCEL_OPTION) {
            Toolkit.getDefaultToolkit().beep();
            try {
                Thread.sleep(20000);
            } catch (InterruptedException e) {
                e.printStackTrace();
            }
        }
    }
}
