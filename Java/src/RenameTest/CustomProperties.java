package RenameTest;

import java.io.FileInputStream;
import java.io.FileWriter;
import java.io.IOException;
import java.util.Properties;

public class CustomProperties extends Properties {
    public void init(String name) throws IOException {
        try (var in=new FileInputStream(name)){
            this.load(in);
        }
        catch (IOException e){
            var out=new FileWriter(name);
            out.close();
        }
    }

    public String getProperty(String key, String defaultValue){
        if(super.getProperty(key)==null) {
            try {
                this.setProperty(key,defaultValue);
                this.store(new FileWriter("config.cfg"),"setDefaultValue");
            }catch (IOException e) {
                throw new RuntimeException(e);
            }
        }
        return super.getProperty(key);
    }
}
