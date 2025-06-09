package construct;

public class MethodInitMain1 {
    public static void main(String[] args) {
        Memberlnit member1 = new Memberlnit();
        member1.name = " user1 ";
        member1.age = 15;
        member1.score = 90;

        Memberlnit member2 = new Memberlnit();
        member2.name  = "user2";
        member2.age = 16;
        member2.score = 80;

        Memberlnit[] members = {member1, member2};

        for (Memberlnit s : members) {
            System.out.println("이름:" + s.name + "나이:" + s.age + "점수:" + s.score);

        }

    }
}
