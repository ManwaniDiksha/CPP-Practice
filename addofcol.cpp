//for int t[3][4] above, write code (declarations included) that prints the sum of each column.

#include <iostream>
using namespace std;
int main(){
int t[3][4] = { {1,2,3,4}, {5,6,7,8}, {9,10,11,12} };
for(int i=0; i<4; i++)
{
    int sum=0;
    for(int j=0; j<3; j++)
    {
        sum = sum + t[j][i];
    }
    cout << sum << endl;
}


return 0;
}