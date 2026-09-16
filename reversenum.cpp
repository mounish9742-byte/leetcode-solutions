#include <iostream>
#include <string>
#include <algorithm>
    using namespace std;

class Solution
{
public:
    string reverseWords(string s)
    {
        string ans = "";

        // Reverse the complete string
        reverse(s.begin(), s.end());

        for (int i = 0; i < s.length(); i++)
        {

            string word = "";

            // Take characters until a space is found
            while (i < s.length() && s[i] != ' ')
            {
                word += s[i];
                i++;
            }

            // Reverse the individual word
            reverse(word.begin(), word.end());

            // Add non-empty word to answer
            if (word.length() > 0)
            {
                ans += " " + word;
            }
        }

        // Remove the first unwanted space
        return ans.substr(1);
    }
};

int main()
{
    Solution obj;

    string s;

    cout << "Enter a string: ";
    getline(cin, s);

    string result = obj.reverseWords(s);

    cout << "Reversed words: " << result << endl;

    return 0;
}
