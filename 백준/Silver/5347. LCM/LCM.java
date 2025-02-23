import java.util.Scanner;

public class Main {
    public static long check(long a, long b) {
        if(a % b == 0) {
            return b;
        }
        return check(b, a % b);
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        long n = sc.nextLong();
        for(int i = 0; i < n; i++) {
            long a = sc.nextLong();
            long b = sc.nextLong();

            long gcd = check(a,b);
            long ta = (a / gcd);
            long tb = (b / gcd);

            System.out.println(ta * tb * gcd);
        }
        sc.close();
    }
}