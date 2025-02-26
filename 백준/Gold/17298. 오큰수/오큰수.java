

import java.io.*;
import java.util.Stack;

public class Main {
    public static void main(String[] args) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        int n = Integer.parseInt(br.readLine());
        int[] arr1 = new int[1000000];
        int[] arr2 = new int[1000000];
        Stack<Integer> s = new Stack<>();

        String[] input = br.readLine().split(" ");

        for(int i = 0; i < n; i++) {
            arr1[i] = Integer.parseInt(input[i]);
        }

        for(int j = n-1; j >= 0; j--) {
            while(!s.isEmpty()) {
                if(s.peek() > arr1[j]) { // C++ s.top , Java s.peek()
                    arr2[j] = s.peek();
                    break;
                }
                else{
                    s.pop();
                }
            }
            if(s.isEmpty()) {
                arr2[j] = -1;
            }
            s.push(arr1[j]);
        }

        for(int k = 0; k < n; k++) {
            bw.write(arr2[k] + " ");
        }
        bw.flush();
        br.close();
    }
}
