#include <bits/stdc++.h>
using namespace std;

void phoneNumber(string output, string input, int index, vector<string> &v)
{
    vector<string> num = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
    if (index>=input.size())
    {
        v.push_back(output);
        return;
    }
    int digit = input[index] - '0';
    
    string val = num[digit];
    for (int i = 0; i < val.size(); i++)
    {


        output.push_back(val[i]);
        
        
        phoneNumber(output, input, index+1, v);
        output.pop_back();
    }
}
vector<string> letterCombinations(string digits)
{
    string output = "";
    string input = value;
    vector<string> v;
    if(digits.size()==0) return v;
    int index=0;
    phoneNumber(output, input, index, v);
    return v;
}
int main()
{
    string sa = "2";
    rec(sa);
}