#include <string>
#include <vector>

using namespace std;

int solution(int a, int d, vector<bool> included) {
    int answer = 0;
    
    for(int i = 0; i<included.size(); i++)
    {
        if(included[i] == 1)
        {
            if(i == 0) {
                answer = a;
            }
            else{
                answer = answer + (a+(d*i));
            }
        }
        
    }
    return answer;
}