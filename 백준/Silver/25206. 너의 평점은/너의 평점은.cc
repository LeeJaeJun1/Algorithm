#include<iostream>
using namespace std;

int main() {
    string sub,point;
    double score;
    double total = 0;
    double scoreTotal = 0;
    double final = 0;

    for(int i = 0; i < 20; i++) {
        cin >> sub >> score >> point;
        if(point == "A+") {
            scoreTotal += score;
            total += 4.5 * score;
        }
        else if(point == "A0") {
            scoreTotal += score;
            total += 4.0 * score;
        }
        else if(point == "B+") {
            scoreTotal += score;
            total += 3.5 * score;
        }
        else if(point == "B0") {
            scoreTotal += score;
            total += 3.0 * score;
        }
        else if(point == "C+") {
            scoreTotal += score;
            total += 2.5 * score;
        }
        else if(point == "C0") {
            scoreTotal += score;
            total += 2.0 * score;
        }
        else if(point == "D+") {
            scoreTotal += score;
            total += 1.5 * score;
        }
        else if(point == "D0") {
            scoreTotal += score;
            total += 1.0 * score;
        }
        else if(point == "P") {
            continue;
        }
        else{
            scoreTotal += score;
            total += 0.0 * score;
        }
    }
    final = total / scoreTotal;
    cout << final;
}