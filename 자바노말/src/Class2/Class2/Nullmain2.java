package Class2;

public class Nullmain2 {
    public static void main(String[] args) {
        Data data = null; // Data data = Data(); 로해결
        data.value = 10; //NullPointerException 발생
        System.out.println("data =" + data.value);
    }

}
