#include <string>
#include <vector>

using namespace std;

int solution(string number) {
    int answer = 0;
    for (int i = 0; i < number.size(); i++)
    {
        answer = answer + number[i] - '0';
    }
    answer = answer % 9;
    return answer;
}