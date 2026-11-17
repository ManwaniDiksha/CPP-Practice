#include <iostream>
using namespace std;
int main(){
int arr[5] = {8, -3, 5, -10, 6};
int min = arr[0];

for(int i=0; i<5; i++)
{
    if(arr[i] < min)
    { 
        min = arr[i];
    }
}
cout << "The minimum element in the array is: " << min << endl;
}