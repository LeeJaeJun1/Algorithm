

import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;

public class Main {
    public static void main(String[] args) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

        int n = Integer.parseInt(br.readLine());
        int total = 0;
        while(true) {
            if(n % 5 == 0) {
                total += n / 5;
                break;
            }
            else if(n < 0) {
                total = -1;
                break;
            }
            n-=3;
            total++;
        }
        bw.write(total + "\n");
        bw.flush();
        bw.close();
        br.close();
    }
}
