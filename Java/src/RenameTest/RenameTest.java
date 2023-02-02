package RenameTest;

import java.io.*;
import java.util.*;

public class RenameTest {
    public static void main(String[] args) throws IOException {
        var config=new CustomProperties();
        config.init("config.cfg");
        final String defaultPath="\\images";
        String path= config.getProperty("path",defaultPath);
        String name= config.getProperty("name","Student");
        var dictionary=new File(path);
        if(!dictionary.isDirectory()) dictionary=new File(defaultPath);
        File[] files=dictionary.listFiles();
        if(files==null) System.exit(0);
        var in=new Scanner(System.in);
        var numberOfSubjects=in.nextInt();
        var subjects=new Subject[numberOfSubjects];
        var sum=new int[numberOfSubjects];
        for (int i = 0; i <numberOfSubjects ; i++) {
            subjects[i]=new Subject(in.nextInt(),in.nextInt());
            sum[i]=((i>=1)?sum[i-1]:0)+subjects[i].getNumber();
        }
        in.close();
        var calendar=Calendar.getInstance();
        String date=""+calendar.get(Calendar.YEAR)+calendar.get(Calendar.MONTH)+calendar.get(Calendar.DATE);
        for (int i = 0,index=0; i < files.length; i++) {
            File file = files[i];
            if(i+1>sum[index]) {
                index++;
            }
            File f=new File(path,(subjects[index].getName()+"作业"+date+"(图"+(subjects[index].getNumber()-sum[index]+i+1)+")-"+name+".jpg"));
            if(!file.renameTo(f)) System.out.println("rename wrong");
        }
        var sj=new StringJoiner("\" \"","\"","\"");
        for (int i = 0,index=0; i < files.length; i++) {
            if(i+1>sum[index]) {
                index++;
                System.out.println(sj);
                sj=new StringJoiner("\" \"","\"","\"");
            }
            sj.add(subjects[index].getName()+"作业"+date+"(图"+(subjects[index].getNumber()-sum[index]+i+1)+")-"+name+".jpg");
        }
        System.out.printf("%s",sj);
    }
}
