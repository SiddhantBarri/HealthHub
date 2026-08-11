import java.util.*;

public class Main {

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        int t = sc.nextInt();

        while (t-- > 0) {

            int n = sc.nextInt();
            int k = sc.nextInt();

            // All characters would be equal
            if (k == n - 1) {
                System.out.println(-1);
                continue;
            }

            // Check parity
            if ((n % 2 == 0 && k % 2 != 0) ||
                (n % 2 == 1 && k % 2 == 0)) {
                System.out.println(-1);
                continue;
            }

            StringBuilder s = new StringBuilder();

            // Start with alternating string
            for (int i = 0; i < n; i++) {
                s.append(i % 2 == 0 ? '0' : '1');
            }

            /*
             * Each operation on "0101" -> "0011"
             * creates 2 equal adjacent pairs.
             */
            int operations = k / 2;

            int pos = 0;

            while (operations > 0) {

                // 0101 -> 0011
                if (pos + 3 < n) {

                    s.setCharAt(pos, '0');
                    s.setCharAt(pos + 1, '0');
                    s.setCharAt(pos + 2, '1');
                    s.setCharAt(pos + 3, '1');

                    pos += 4;
                    operations--;

                } else {
                    break;
                }
            }

            System.out.println(s);
        }

        sc.close();
    }
}
