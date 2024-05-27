#include <string>
#include <vector>

using namespace std;

int solution(string myString, string pat) {
    int answer = 0;
    int len_pat = pat.size();
    
    for(int i = 0; i<=myString.size()-len_pat; i++)
    {
        if(myString.substr(i, len_pat) == pat)
        {
            answer++;
        }
    }
    
    return answer;
}