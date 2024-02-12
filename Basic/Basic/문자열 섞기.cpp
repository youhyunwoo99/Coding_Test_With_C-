#include <string>
#include <vector>
using namespace std;

string solution(string str1, string str2) {
    string answer = "";
    int num = str1.size();
    
    for(int i = 0; i<num; i++)
    {
        answer += str1[i];
        answer += str2[i];
    }
    return answer;
}