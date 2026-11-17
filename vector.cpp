#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> st;

    st.push_back(10);
    st.push_back(20);
    st.push_back(30);
    st.push_back(40);
    st.push_back(50);

    while(!st.empty())
    {
        cout << st.back() << endl;
        st.pop_back();
    }
}