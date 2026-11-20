#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int N, x;
    cin >> N;
    vector<int> v;
    for(int i=0; i<N; i++)
    {
        cin >> x;
        v.push_back(x);
    }

    make_heap(v.begin(), v.end());
    // sort_heap(v.begin(), v.end());
    

    for(int x : v)
    {
        cout << x << endl;
    }
}