#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> intStrs, int k, int s, int l) {
    vector<int> answer;
    string str = "NULL";
    for(int i = 0; i < intStrs.size(); i++)
    {
        string sstr = intStrs[i].substr(s, l);
        int istr = stoi(sstr);
        if(istr > k)
        {
            answer.push_back(istr);
        }
    }
    
    return answer;
}