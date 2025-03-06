import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;
import java.util.StringTokenizer;

public class Main {
    public static void main(String[] args) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

        int n = Integer.parseInt(br.readLine());
        StringTokenizer st;

        if(n==2) {
            st = new StringTokenizer(br.readLine());
            int a = Integer.parseInt(st.nextToken());
            int b = Integer.parseInt(st.nextToken());
            for(int i = 1; i <= Math.max(a,b); i++) {
                if(a % i == 0 && b % i == 0) {
                    bw.write(i + "\n");
                }
            }
        }
        else if(n==3) {
            st = new StringTokenizer(br.readLine());
            int a = Integer.parseInt(st.nextToken());
            int b = Integer.parseInt(st.nextToken());
            int c = Integer.parseInt(st.nextToken());
            int d = Math.max(a,b);
            for(int i = 1; i <= Math.max(c,d); i++) {
                if(a % i == 0 && b % i == 0 && c % i == 0) {
                    bw.write(i + "\n");
                }
            }
        }
        bw.flush();
        bw.close();
        br.close();
    }
}
