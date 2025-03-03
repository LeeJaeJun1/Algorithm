

import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;

public class Main {
    public static void main(String[] args) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

        int [] n = new int[100];
        int num;

        for(int i = 1; i <= 30; i++) {
            n[i] = i;
        }

        for(int j = 1; j <= 28; j++) {
            num = Integer.parseInt(br.readLine());
            n[num] = 0;
        }

        for(int k = 1; k <= 30; k++) {
            if(n[k] != 0) {
                bw.write(n[k] + "\n");
            }
        }
        bw.flush();
        br.close();
    }
}
