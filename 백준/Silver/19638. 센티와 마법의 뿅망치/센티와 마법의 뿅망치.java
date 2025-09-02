import java.io.*;
import java.util.*;


public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        StringTokenizer st = new StringTokenizer(br.readLine());

        int num = Integer.parseInt(st.nextToken());
        int senti = Integer.parseInt(st.nextToken());
        int test = Integer.parseInt(st.nextToken());

        PriorityQueue<Integer> pq = new PriorityQueue<>(Collections.reverseOrder());
        st = new StringTokenizer(br.readLine());

        for (int i = 0; i < num; i++) {
            if (!st.hasMoreTokens()) {
                st = new StringTokenizer(br.readLine());
            }
            int h = Integer.parseInt(st.nextToken());
            pq.add(h);
        }


        long count = 0;
        /*
        add() : 우선순위 큐에 원소를 추가. 큐가 꽉 찬 경우 에러 발생
        offer() : 우선순위 큐에 원소를 추가. 값 추가 실패 시 false를 반환
        poll() : 우선순위 큐에서 첫 번째 값을 반환하고 제거, 비어있으면 null 반환
        remove() : 우선순위 큐에서 첫 번째 값을 반환하고 제거, 비어있으면 에러 발생
        isEmpty() : 우선순위 큐에서 첫 번째 값을 반환하고 제거, 비어있으면 에러 발생
        clear() : 우선순위 큐를 초기화
        size() : 우선순위 큐에 포함되어 있는 원소의 수를 반환

         */
        while(test-- > 0) {
            int f = pq.peek();
            if(f >= senti && f != 1) {
                pq.poll();
                pq.add(f / 2);
                count++;
            }
            else {
                break;
            }
        }
        if(pq.peek() >= senti) {
            bw.write("NO\n" + pq.peek() + "\n");
        }
        else {
            bw.write("YES\n" + count + "\n");
        }
        bw.flush();
        bw.close();
        br.close();
    }
}
