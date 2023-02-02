import javax.sound.sampled.AudioSystem;
import javax.sound.sampled.Line;
import javax.sound.sampled.LineUnavailableException;
import javax.sound.sampled.Mixer;
import javax.sound.sampled.Mixer.Info;
import javax.sound.sampled.TargetDataLine;

public class AppSoundDetector {
    public static void main(String[] args) {
        // 获取所有可用的音频混合器信息
        Info[] mixerInfos = AudioSystem.getMixerInfo();
        for (Info mixerInfo : mixerInfos) {
            // 根据混合器信息获取音频混合器
            Mixer mixer = AudioSystem.getMixer(mixerInfo);

            // 获取可用的输出线路信息
            Line.Info[] lineInfos = mixer.getTargetLineInfo();
            for (Line.Info lineInfo : lineInfos) {
                // 打开音频输出流
                try {
                    Line line = mixer.getLine(lineInfo);
                    line.open();

                    // 检查输出流是否正在运行
                    if (line instanceof TargetDataLine && ((TargetDataLine) line).isRunning()) {
                        System.out.println("应用正在发出声音");
                        break;
                    }
                } catch (LineUnavailableException e) {
                    e.printStackTrace();
                }
            }
        }
    }
}
