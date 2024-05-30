#include <string>
#include <vector>

using namespace std;

vector<string> solution(string my_string) {
    vector<string> answer;
    string temp;
    for(auto i : my_string){
        if(i != ' ')
        {
            temp += i;
        }else{
            if(!temp.empty()){
                answer.push_back(temp);
                temp = "";
            }
        }
    }
    if(!temp.empty())
    {
        answer.push_back(temp);
    }
    return answer;
}