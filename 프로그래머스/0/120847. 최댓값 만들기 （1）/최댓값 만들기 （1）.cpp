#include <string>
#include <vector>

using namespace std;

int solution(vector<int> numbers) {
    int answer = 0;
    int maximum = 0;
    for(int i = 0; i<numbers.size(); i++) {
        for(int j = i+1 ; j<numbers.size(); j++){
        answer = numbers[i] * numbers[j];
        if(answer > maximum) {
            maximum = answer;
        }
    }
 }
    return maximum;
}