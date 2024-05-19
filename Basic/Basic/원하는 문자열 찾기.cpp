#include <string>
#include <vector>

using namespace std;

int solution(string myString, string pat) {
    int answer = 0;
    int my_size = myString.size();
    int p_size = pat.size();
    
    for(int i = 0; i<=my_size-p_size; i++)
    {
        bool state = true;
        for(int j = 0; j < p_size; j++)
        {
            if(tolower(myString[i+j]) != tolower(pat[j]))
            {
                state = false;
                break;
            }
        }
        if(state)
    {
        return 1;
    }
    }
    
    return 0;
}