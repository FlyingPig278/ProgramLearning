class people{
    String name;
    java.math.BigInteger love=java.math.BigInteger.ZERO;

    public people(String name){
        this.name=name;
    }
    public void love(people p){
        love=love.add(java.math.BigInteger.ONE);
    }
}

public class lovetest {
    public static void main(String[] args){
        var I=new people("I");
        var you=new people("you");
        while(true){
            I.love(you);
        }
    }
}
