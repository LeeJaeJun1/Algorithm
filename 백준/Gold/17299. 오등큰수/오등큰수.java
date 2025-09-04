import java.io.*;
import java.util.Stack;
import java.util.StringTokenizer;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

        int n = Integer.parseInt(br.readLine());
        int[] arr = new int[n+1];
        int[] f = new int[1000001];
        int[] ma = new int[1000001];
        Stack<Integer> sta = new Stack<>();

        StringTokenizer st = new StringTokenizer(br.readLine());

        for(int i = 1; i <= n; i++) {
            arr[i] = Integer.parseInt(st.nextToken());
            ma[arr[i]]++;
        }

        for(int j = n; j >= 1; j--) {
            while(!sta.isEmpty()) {
                if(ma[sta.peek()] > ma[arr[j]]) {
                    f[j] = sta.peek();
                    break;
                }
                else {
                    sta.pop();
                }
            }
            if(f[j] == 0) {
                f[j] = -1;
            }
            sta.push(arr[j]);
        }
        for(int k = 1; k <= n; k++) {
            bw.write(f[k] + " ");
        }
        bw.flush();
        bw.close();
        br.close();
    }
}
