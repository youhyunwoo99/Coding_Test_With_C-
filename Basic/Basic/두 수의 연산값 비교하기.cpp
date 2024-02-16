#include <string>
#include <vector>

using namespace std;

int solution(int a, int b) {
    int answer = 0;
    string str = to_string(a)+to_string(b);
    int num = stoi(str);
   
    
    if(num > 2*a*b)
    {
        answer = num;
    }
    else if(num < 2*a*b)
    {
        answer = 2*a*b;
    }
    else
    {
        answer = num;
    }
    return answer;
}