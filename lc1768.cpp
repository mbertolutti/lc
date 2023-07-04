// lc1768.cpp 'Merge Strings Alternately', string, iterator;

#include <fmt/core.h>
#include <string>

std::string mergeAlternately(std::string word1, std::string word2)
{
    std::string result;
    auto word1_iter = word1.begin();
    auto word2_iter = word2.begin();

    while (word1_iter != word1.end() || word2_iter != word2.end())
    {
        if (word1_iter != word1.end())
        {
            result += *word1_iter;
            ++word1_iter;
        }
        if (word2_iter != word2.end())
        {
            result += *word2_iter;
            ++word2_iter;
        }
    }

    return result;
}

int main()
{
    std::string word1 = "abcdefg";
    std::string word2 = "hijklmnopqrstuvwxyz";

    fmt::print("{}\n", mergeAlternately(word1, word2));
}
