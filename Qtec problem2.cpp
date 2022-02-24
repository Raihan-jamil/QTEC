#include <bits/stdc++.h>
using namespace std;

int numberOfOccurrenceOfPatternInText(string& text, string& pattern)
{
    int textLen = text.size();
    int patternLen = pattern.size();

    int ans = 0;
    for(int i = 0;  i < textLen - patternLen + 1; i++)
    {
        int flag = 1;
        for(int j = 0; j < patternLen; j++)
        {
            if(pattern[j] != text[i+j])
            {
                flag = 0; break;
            }
        }

        if(flag == 1) ans++;
    }
    return ans;
}

int main()
{
    string text, pattern;

    text = "tadadattaetadadadafa", pattern = "dada";

    int ans = numberOfOccurrenceOfPatternInText(text, pattern);

    cout<<ans<<'\n';

    return 0;

}


/*

Here, create a function named numberOfOccurrenceOfPatternInText() which take two parameter text
and pattern and return the number of occurrence of pattern in text. In the function we iterate
two for loops. In outer loop we check for every possible position of text from where there is
possible to find a pattern if we check a the substring which start at this position and which length
is equals to pattern length. In inner loop we check if the substring is equals to the
pattern or not. At the beginning of the inner loop we assume that the substring which we considered
for the current position is equals to the pattern by assign the flag value with 1. If there is a
mismatch then we assign flag value with 0 and break the inner loop. Then we increment our answer by
checking the flag value whether it is 1 or not. If flag is equals to 1 then the substring matched
with the pattern and we will increase our answer. And finally we return the answer from  the function.

*/


