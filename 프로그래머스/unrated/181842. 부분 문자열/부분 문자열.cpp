#include <string>
#include <vector>

using namespace std;

int solution(string str1, string str2) {
    int answer = str2.find(str1);
    if(answer!=string::npos)
        answer =1;
    else
        answer = 0;
    return answer;
}