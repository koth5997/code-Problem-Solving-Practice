package class1;

public class Classstart2 {
    public static void main(String[] args) {
        String[] studentNames = {"학생1", "학생2"};
        int[] studentages = {15, 16};
        int [] studentscores = {90, 80};

        for (int i =0; i< studentNames.length; i++){
            System.out.println("이름:" + studentNames[i] + "나이:" + studentages[i] + "성적:" + studentscores[i]);
        }
    }
}
