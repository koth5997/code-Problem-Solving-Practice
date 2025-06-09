package construct;

public class ConstructMain2 {
    public static void main(String[] args) {
        MemberConstruct member1 = new MemberConstruct("user1", 19, 90);
        MemberConstruct member2 = new MemberConstruct("user2", 30); //원하는 생성자를 호출가능

        MemberConstruct[] member = {member1, member2};

        for (MemberConstruct s : member) {
            System.out.println("이름:" + s.name + "나이:" + s.age + "점수:" + s.score);
        }
    }
}
