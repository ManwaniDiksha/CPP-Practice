#include <iostream>
#include <stack>
#include <string>
using namespace std;

bool isBalanced(string str)
{
    stack<char> st;
    for(char ch : str)
    {
        if(ch == '[' || ch == '{' || ch == '(')
        {
            st.push(ch);
        }
        else if(ch == ']' || ch == '}' || ch == ')')
        {
            if(st.empty())
            {
                return false;
            }
            char open = st.top();

            if(ch == ']' && open != '[' || ch == '}' && open != '{' || ch == ')' && open != '(')
            {
                return false;
            }
            st.pop();
        }
    }

    return st.empty();
}

int main()
{
    string str;
    getline(cin, str);

    if(isBalanced(str))
    {
        cout << "Balanced" << endl;
    }
    else
    {
        cout << "Unbalanced" << endl;
    }

    return 0;
}