#include <string>
#include <vector>

using namespace std;

string solution(string myString) {
    string answer = myString;
    for(int i = 0;i<answer.length();i++)
    {
        if(answer[i] == 'a')
        {
            answer[i] -= 32;
        }
        else if(answer[i] >= 'B' && answer[i] <= 'Z')
            answer[i] += 32;
    }
    return answer;
}