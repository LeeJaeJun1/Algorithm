import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;

public class Main {
    public static void main(String[] args) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

        int num = Integer.parseInt(br.readLine());
        int [] arr = new int[10]; // 모두 0으로 초기화

        while(num > 0) {
            if(num % 10 == 6 || num % 10 == 9) {
                if(arr[6] == arr[9]) {
                    arr[9]++;
                }
                else {
                    arr[6]++;
                }
            }
            else {
                arr[num%10]++;
            }
            num /= 10;
        }

        int max = 0;
        for(int i = 0; i < 10; i++) {
            if(max < arr[i]) {
                max = arr[i];
            }
        }
        bw.write(max + "\n");

        bw.flush();
        bw.close();
        br.close();
    }
}
