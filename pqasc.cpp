#include <iostream>
#include <queue>

using namespace std;

int main()
{
    int N, x;
    cin >> N;

    priority_queue<int, vector<int>, greater<int>> pq;

    for(int i=0; i<N; i++)
    {
        cout << "Enter element: ";
        cin >> x;
        pq.push(x);
    }

    while(!pq.empty())
    {
        cout << pq.top() << endl;
        pq.pop();
    }

    return 0;
}