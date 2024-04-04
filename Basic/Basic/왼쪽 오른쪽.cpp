#include <string>
#include <vector>

using namespace std;

vector<string> solution(vector<string> str_list) {
    vector<string> answer;
    int num = 0;
    for(int i = 0; i<str_list.size(); i++)
    {
        if(str_list[i] == "l")
        {
            num = i;
            return vector<string>(str_list.begin(), str_list.begin()+num);
        }
        else if(str_list[i] == "r")
        {
            num = i;
            return vector<string>(str_list.begin()+num+1, str_list.end());
        }
    }
    if(num == 0) 
    {return answer;}
}