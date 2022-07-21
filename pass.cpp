#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool strongPasswordCheckerII(string password)
    {
        bool len = true;
        if (password.size() >= 8)
            len = true;
        else
            return false;

        bool low = false;
        bool up = false;
        bool al = false;
        bool dig = false;
        bool sp = true;
        for (int i = 0; i <= password.size() - 1; i++)
        {
            char ch = password[i];

            if (islower(ch))
                low = true;
            if (isupper(ch))
                up = true;
            if ((password[i] >= 48 && password[i] <= 57) ||
                (password[i] >= 65 && password[i] <= 90) ||
                (password[i] >= 97 && password[i] <= 122))
            {
                
            }
            else
                al=true;;
            
                
    
            
        

            if (isdigit(ch))
                dig = true;
            if (password[i] == password[i + 1])
                sp = false;
    }
    if (len == true && low == true && up == true && al == true && dig == true && sp == true)
        return true;
    else
        return false;
}
}
;
int main()
{
    string p = "!IloveLe3tcode";
    Solution s;
    bool ans = s.strongPasswordCheckerII(p);
    cout << ans;
}