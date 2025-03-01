

import java.io.*;
import java.util.AbstractMap.SimpleEntry;
import java.util.Stack;

public class Main {
    public static void main(String[] args) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

        int n = Integer.parseInt(br.readLine());
        // C++ stack<pair<int,int>> s , Java Stack<SimpleEntry<Integer, Integer>>
        // Java에서 first 값은 getKey, Second 값은 getValue 사용
        Stack<SimpleEntry<Integer,Integer>> s = new Stack<>();
        String [] input = br.readLine().split(" ");
        int [] arr = new int[n+1];

        for(int i= 1; i <=n ;i++){
            arr[i] = Integer.parseInt(input[i-1]);
        }
        for (int i = 1; i <= n; i++) {
            while(!s.isEmpty()){
                if(s.peek().getValue() > arr[i]) {
                    bw.write(s.peek().getKey() + " ");
                    break;
                }
                s.pop();
            }
            if(s.isEmpty()){
                bw.write("0 ");
            }
            s.push(new SimpleEntry<>(i, arr[i]));
        }
        bw.flush();
        bw.close();
        br.close();
    }
}
