#include<iostream>
using namespace std;

int main() {
    // 3일 연속 가격 전일 대비 -> 다음날 무조건 가격 하락 , 전량 매도
    // 3일 연속 가격 전일 대비 하락 -> 다음날 무조건 가격 상승 , 전량 매수
    // 자산 = 현금 + 1월 14일의 주가 * 주식 수
    // 준현이는 BNP 무조건 산다, 성민이는 33 매매법
    ios::sync_with_stdio(0);
    cin.tie(0);
    int money, jun = 0,sung = 0;
    int invest[15];
    cin >> money;
    for(int i = 0; i < 14; i++) {
        cin >> invest[i];
    }
    int jmoney = money;

    for(int j = 0; j < 14; j++) {
        if(jmoney >= invest[j]) {
            jun += (jmoney / invest[j]);
            jmoney %= invest[j];
        }
    }
    int smoney = money;
    for(int k = 0; k < 10; k++) {
        if(invest[k] > invest[k+1] && invest[k+1] > invest[k+2]) {
            if(smoney >= invest[k+3]) {
                sung += (smoney / invest[k + 3]);
                smoney %= invest[k + 3];
            }
        }
        else if(invest[k] < invest[k+1] && invest[k+1] < invest[k+2]) {
            smoney += sung * invest[k+3];
            sung = 0;
        }
    }
    if(jun * invest[13] + jmoney >sung * invest[13] + smoney) {
        cout << "BNP" << "\n";
    }
    else if(jun * invest[13] + jmoney < sung * invest[13] + smoney){
        cout << "TIMING" << "\n";
    }
    else{
        cout << "SAMESAME" << "\n";
    }
}