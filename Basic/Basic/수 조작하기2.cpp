#include <string>
#include <vector>

using namespace std;

string solution(vector<int> numLog) {
    string answer = "";
    for(int i = 1; i<numLog.size(); i++)
    {
        if(numLog[i-1] > numLog[i]){       //앞 뒤랑 대소관계는 이미 정리 됨..(앞이 더 큼)
            //감소했다는 소리
            if(numLog[i] - numLog[i-1] == 1 || numLog[i] - numLog[i-1] == -1)
            {
                answer += 's';
            }
            else if(numLog[i] - numLog[i-1] == 10 || numLog[i] - numLog[i-1] == -10)
            {
                answer += 'a';
            }
        }
        else if(numLog[i-1] < numLog[i]){
            //증가했다는 소리
            if(numLog[i] - numLog[i-1] == 1 || numLog[i] - numLog[i-1] == -1)
            {
                answer += 'w';
            }
            else if(numLog[i] - numLog[i-1] == 10 || numLog[i] - numLog[i-1] == -10)
            {
                answer += 'd';
            }
        }
    }
    return answer;
}