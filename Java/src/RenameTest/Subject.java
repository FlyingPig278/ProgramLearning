package RenameTest;

public class Subject {
    private final int number;
    private final String name;

    public Subject(int number,int nameID){
        this.number=number;
        String[] names = {"语文", "数学", "英语", "物理", "化学", "政治", "历史", "地理", "生物"};
        name= names[nameID-1];
    }

    public int getNumber() {
        return number;
    }

    public String getName() {
        return name;
    }
}