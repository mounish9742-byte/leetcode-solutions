#include <iostream>
#include <string>
using namespace std;

class Solution
{
public:
    bool isAnagram(string s, string t)
    {
        if (s.length() != t.length())
        {
            return false;
        }

        int count[26] = {0};

        for (int i = 0; i < s.length(); i++)
        {
            count[s[i] - 'a']++;
        }

        for (int i = 0; i < t.length(); i++)
        {
            count[t[i] - 'a']--;
        }

        for (int i = 0; i < 26; i++)
        {
            if (count[i] != 0)
            {
                return false;
            }
        }

        return true;
    }
};

int main()
{
    Solution obj;

    string s, t;

    cout << "Enter first string: ";
    cin >> s;

    cout << "Enter second string: ";
    cin >> t;

    if (obj.isAnagram(s, t))
    {
        cout << "true" << endl;
    }
    else
    {
        cout << "false" << endl;
    }

    return 0;
}