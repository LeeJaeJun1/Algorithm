#include<iostream>
#include<queue>
using namespace std;

// 하나의 차선 다리 n개의 트럭 건너감. 트럭 순서 변경 못함
// w대 트럭만 동시 올라감. 다리의 길이 w 단위길이
// 각 트럭은 하나의 단위시간에 하나의 단위 길이만큼 이동가능
// 동시 다리 위 올라가있는 트럭 합 다리의 최대하중 L보다 작거나 같음
// 큐를 사용해서 최대 하중하고 단위길이 고려하면 될 듯?

// w: 2 L : 10 , [7,4,5,6]
// 1 - 7, 2 - 7, 3 - 4,  4 - 4,5 , 5 - 5,  6 - 6,  7 - 6, 8 - 6
// (7) w 2 + (4,5) w + 1 3 + (6) w + 1 3


// n : 1 w : 100 L : 100 [10], 맨 첫번째 + 혼자 = w + 1

// n : 10 w : 100 L : 100 [10,10,10,10,10,10,10,10,10,10]
//

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    queue<int> bridge; // 큐의 크기가 length 최대 하중 max
    queue<int> truck;
    // Day 1
    // 7 7 4 4 5 5 6 6
    // 1초 7 4 4 5 5 6 6 / 2초 7 4 4 5 5 6 6 / 3초 4 5 5 6 6
    // 4초 4 5 6 6 / 5초 5 6 6 / 6초 6 6 / 7초 6 / 8초 -
    // 7 + 4 > 10 따라서 1대, 4 + 5 > 10 2대 가능,

    // Day 2
    // 다리의 길이와 최대 무게 정해져 있으니까 두 개 0으로 놓고 더한다음 넘으면 안되는걸로
    // 다리와 트럭 두 개의 큐를 설정하고, 다리 위에 트럭 수 변수 하나, 다리 하중 변수 하나 둘 0으로 초기화
    // 트럭 올리고, 하중 넘으면 0을 넣고, 아니면 트럭에서 뺀다.
    // 생각할 부분이 다리 길이..... 시간 음....

    int num, length, max, t; // 트럭 수, 다리 길이, 최대 하중

    cin >> num >> length >> max;

    for(int i = 0; i < num; i++) {
        cin >> t;
        truck.push(t);
    }

    int ms = 0; // 시간
    int weight= 0; // 현재 다리 위의 차 무게

    while(!truck.empty()) {
        if(bridge.size() >= length) { // 만약 다리 위에 2대가 넘는다면 다리 맨 앞 차 뺴주고 최대 하중도 뺴주고
            weight -= bridge.front();
            bridge.pop();
        }
        if(weight + truck.front() > max)  { // 만약 현재 다리 위에 차 + 그 다음 차의 합이 최대 하중 넘어가면 0넣어줌. 시간 체크 위해서
            bridge.push(0);
        }
        else { // 두개의 합 안넘으면 그 다음 차 넣어주고, 최대 하중에 추가해줌
            bridge.push(truck.front());
            weight += truck.front();
            truck.pop();
        }
        ms++;
    }
    // 맨 마지막 차 입장과 동시에 while문이 끝나기 때문에 마지막 차가 다리를 건너는 시간까지 더해줘야 한다. 즉 다리 길이.
    cout << ms + length;
}