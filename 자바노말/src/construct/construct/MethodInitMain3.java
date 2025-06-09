package construct;

public class MethodInitMain3 {
    public static void main(String[] args) {
        Memberlnit member1 = new Memberlnit();
        member1.initMember("user1", 20, 93);

        Memberlnit member2 = new Memberlnit();
        member2.initMember("user2", 30, 39);

        Memberlnit[] members = {member1, member2};

        for (Memberlnit s : members) {
            System.out.println("이름:" + s.name + "나이:" + s.age + "점수:" + s.score);

        }

    }


}
