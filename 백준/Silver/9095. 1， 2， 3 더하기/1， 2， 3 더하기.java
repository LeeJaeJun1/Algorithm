import java.io.*;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

        int [] arr = new int[20];
        arr[1] = 1; arr[2] = 2; arr[3] = 4;
        int test = Integer.parseInt(br.readLine());
        int n;
        while(test-- > 0) {
            n = Integer.parseInt(br.readLine());
            for(int i = 4; i <= n; i++) {
                arr[i] = arr[i-1] + arr[i-2] + arr[i-3];
            }
            bw.write(arr[n] + "\n");
        }
        bw.flush();
        bw.close();
        br.close();
    }
}
