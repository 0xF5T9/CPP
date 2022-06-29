#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <stack>

int reversals(std::string exp) // Vector only approach
{
    // If the length of the given string is odd, this expression cannot be balanced, returning -1
    if (exp.length() % 2) return -1;

    // This for() loop will keep removing balance expressions '{}' until there are none left
    for (int i = 0; i < exp.length(); i++)
    {
        std::string::iterator si = exp.begin() + i;
        if (exp[i] == '{' && exp[i + 1] == '}')
        {
            exp.erase(si + 1);
            exp.erase(si);
            i = -1;
        }
    }
    
    /* 
    *   All balance expressions '{}' are now removed
    *   If the given string length is equals zero(mean its empty), 
    *   All expressions in the given string is balance, no change needed
    *   Returning zero
    */
    if (exp.length() == 0) return 0;
    
    /*
    *   If there still are unbalance expressions left, 
    *   Start calculating how many times it gonna take to balance all the expressions
    * 
    * 
    *   }{ ← this take 2 times to turn it into {}
    *   1. switch the first '}' to '{' (Result: {{)
    *   2. switch the second '{' to '}' (Result: {})
    * 
    *   {{ ← this take 1 times to turn it into {}
    *   1. switch the second '{' to '}' (Result: {})
    * 
    *   }} ← this take 1 times to turn it into {}
    *   1. switch the first '}' to '{' (Result: {})
    */
    int count = 0; // Return variable
    for (int i = 0; i < exp.length(); i++)
    {
        std::string::iterator si = exp.begin() + i;
        if (exp[i] == '}' && exp[i + 1] == '{') // Processing '}{'
        {
            count += 2;
            exp.erase(si + 1);
            exp.erase(si);
            i = -1;
            continue;
        }
        if (exp[i] == '}' && exp[i + 1] == '}' || exp[i] == '{' && exp[i + 1] == '{') // Processing '{{' or '}}'
        {
            count += 1;
            exp.erase(si + 1);
            exp.erase(si);
            i = -1;
            continue;
        }
    }

    return count;
}

int reversals_s(std::string exp) // Stack approach
{
    // If the length of the given string is odd, this expression cannot be balanced, returning -1
    if (exp.length() % 2) return -1;

    /*
    *   Find and add unbalance expressions to stack
    */
    std::stack<char> st;
    for (const auto c : exp) {
        if (c == '}')
        {
            if (!st.empty() && st.top() == '{')
            {
                st.pop();
                continue;
            }
        }

        st.push(c);
    }

    /*
    * Start calculating how many times it gonna take to balance all the expressions
    */
    int count = 0;
    while (!st.empty()) 
    {
        const auto t1 = st.top();
        st.pop();
        const auto t2 = st.top();
        st.pop();

        if (t1 != t2) {
            count++;
        }
        count++;
    }

    return count;
}