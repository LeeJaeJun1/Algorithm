import java.io.*;
import java.util.Stack;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

        int num = Integer.parseInt(br.readLine());
        int count = 0;
        for(int i = 0; i < num; i++) {
            String s = br.readLine();
            Stack<Character> stack = new Stack<>();

            for(int j = 0; j < s.length(); j++) {
                if(!stack.isEmpty() && stack.peek() == s.charAt(j)) {
                    stack.pop();
                    continue;
                }
                stack.push(s.charAt(j));
            }
            if(stack.isEmpty()) {
                count++;
            }
        }
        bw.write(count + "\n");

        bw.flush();
        bw.close();
        br.close();
    }
}
