 //Implement from scratch: for int g[3][3] above, write a loop that prints the transpose (rows become columns), without changing the array. For {{1,2,3},{4,5,6},{7,8,9}} it should print 1 4 7, 2 5 8, 3 6 9, one row per line. 

 #include <iostream>
 using namespace std;

 int main()
 {
    int g[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    for(int r=0; r<3; r++)
    {
        for(int c=0; c<3; c++)
        {
            cout << g[c][r] << " ";
        }
        cout << endl;
    }
 }