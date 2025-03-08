import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;
import java.util.Arrays;
import java.util.Collections;

public class Main {
    public static void main(String[] args) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

        int n = Integer.parseInt(br.readLine());
        Integer [] arr = new Integer[n];

        for(int i = 0; i < n; i++) {
            arr[i] = Integer.parseInt(br.readLine());
        }

        Arrays.sort(arr, Collections.reverseOrder());

        int total = -1;
        for(int j = 0; j < n-2; j++) {
            if(arr[j] < arr[j+1] + arr[j+2]) {
                total = arr[j] + arr[j+1] + arr[j+2];
                break;
            }
        }
        bw.write(total + "\n");
        bw.flush();
        bw.close();
        br.close();
    }
}
