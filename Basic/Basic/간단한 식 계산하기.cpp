#include <string>
#include <vector>

using namespace std;

int solution(string binomial) {
    int answer = 0;
    int a, b, p;
    char op;
    
    p = binomial.find(' ');
    a = stoi(binomial.substr(0, p));
    op = binomial[p+1];
    b = stoi(binomial.substr(p+3));
    
    if(op == '+')
    {
        answer = a+b;
    }
    else if(op == '-')
    {
        answer = a-b;
    }
    else if(op == '*')
    {
        answer = a*b;
    }
    return answer;
}