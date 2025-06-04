package Class2;

public class NullMain3 {
    public static void main(String[] args) {
        BIgData bIgData = new BIgData();
        System.out.println("bigData.count ="+ bIgData.count);
        System.out.println("bigData.data ="+ bIgData.data);

        //여기서 NullpointerException 발생
        System.out.println("bigData.data.value" + bIgData.data.value);
    }
}
