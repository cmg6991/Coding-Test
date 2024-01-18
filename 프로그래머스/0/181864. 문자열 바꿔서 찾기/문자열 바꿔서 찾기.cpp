#include <string>
#include <vector>

using namespace std;

int solution(string myString, string pat) {
    string str;
    for(int i = 0;i<myString.size();i++)
    {
        if(myString[i] == 'A')
            str+='B';
        else if(myString[i] == 'B')
            str+='A';
    }
    if(str.find(pat) != string::npos) return 1;
    else return 0;
}