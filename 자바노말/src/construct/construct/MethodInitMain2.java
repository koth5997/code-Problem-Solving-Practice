package construct;

public class MethodInitMain2 {
    public static void main(String[] args) {
        Memberlnit member1 = new Memberlnit();
        initMember(member1, "user1", 15, 90);

        Memberlnit member2 = new Memberlnit();
        initMember(member2, "user2", 16, 80);

        Memberlnit[] members = {member1, member2};

        for (Memberlnit s : members) {
            System.out.println("이름:" + s.name + "나이:" + s.age + "점수:" + s.score);

        }

    }

    static void initMember(Memberlnit member, String name, int age, int score)
    {
        member.name = name;
        member.age = age;
        member.score = score;
    }





}
