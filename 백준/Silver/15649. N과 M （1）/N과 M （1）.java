import java.io.*;
import java.util.StringTokenizer;
import java.util.Vector;

public class Main {
    static int n;
    static int m;
    static Vector<Integer> v = new Vector<>();
    static boolean[] visited = new boolean[10];
    static void search(int start) {
        if(m==start) {
            for(int a : v) {
                System.out.print(a + " ");
            }
            System.out.println();
        }
        for(int i = 1; i <= n; i++) {
            if(!visited[i]) {
                visited[i] = true;
                v.add(i);
                search(start+1);
                visited[i] = false;
                v.remove(v.size()-1);
            }
        }
    }


    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        StringTokenizer st = new StringTokenizer(br.readLine());

        n = Integer.parseInt(st.nextToken());
        m = Integer.parseInt(st.nextToken());

        search(0);

        bw.flush();
        br.close();
        bw.close();
    }
}
