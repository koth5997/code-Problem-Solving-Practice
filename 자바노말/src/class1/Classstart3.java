package class1;

public class Classstart3 {
    public static void main(String[] args){
        student student1;
        student1 = new student();
        student1.name = "정도";
        student1.age = 15;
        student1.score = 90;


        student student2 = new student();
        student2.name = "두라";
        student2.age = 16;
        student2.score = 80;

        System.out.println("이름:" + student1.name + "나이:" + student1.age + "성적:"+ student1.score);
        System.out.println("이름:" + student2.name + "나이:" + student2.age + "성적:"+ student2.score);
    }


}
