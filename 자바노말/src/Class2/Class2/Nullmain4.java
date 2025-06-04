package Class2;

public class Nullmain4 {
    public static void main(String[] args) {
        BIgData bIgData = new BIgData();
        bIgData.data = new Data();
        System.out.println("bigData.count ="+ bIgData.count);
        System.out.println("bigData.data ="+ bIgData.data);
        System.out.println("bigData.data.value=" + bIgData.data.value);
    }
}
