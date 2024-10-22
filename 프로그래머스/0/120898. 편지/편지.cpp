#include <string>
#include <vector>

using namespace std;

int solution(string message) {
    int answer = 0;
    int length = 0;
    for(int i = 0; i< message.size(); i++) {
        length++;   
    }
    answer = 2 * length;
    return answer;
}