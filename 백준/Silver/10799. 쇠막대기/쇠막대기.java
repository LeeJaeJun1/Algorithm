import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;
import java.util.Stack;

public class Main {
    public static void main(String[] args) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        Stack<Character> s = new Stack<>();
        String str = br.readLine();
        int count = 0;

        // charAt(i) 함수는 String 타입의 데이터에서 특정 문자를 char 타입으로 변환
        for(int i = 0; i < str.length(); i++) {
            if(str.charAt(i) == '(' && str.charAt(i+1) == ')') {
                count += s.size();
                i += 1;
            }
            else if(str.charAt(i) == '(') {
                s.push(str.charAt(i));
            }
            else if(str.charAt(i) == ')') {
                count += 1;
                s.pop();
            }
        }
        bw.write(count + "\n");
        bw.flush();
        br.close();
    }
}
