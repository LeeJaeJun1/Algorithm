import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;
import java.util.StringTokenizer;

public class Main {
    public static void main(String[] args) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

        int num = 1;
        StringTokenizer st;

        while(true) {
            st = new StringTokenizer(br.readLine());

            int L = Integer.parseInt(st.nextToken());
            int P = Integer.parseInt(st.nextToken());
            int V = Integer.parseInt(st.nextToken());

            if(L==0 && P == 0 && V == 0) {
                break;
            }

            int a = (V / P) * L;
            int b = (V % P);
            if(L < b) {
                bw.write("Case " + num + ": " + (a + L) + "\n");
            }
            else {
                bw.write("Case " + num + ": " + (a + b) + "\n");
            }
            num++;
        }
        bw.flush();
        bw.close();
        br.close();
    }
}
