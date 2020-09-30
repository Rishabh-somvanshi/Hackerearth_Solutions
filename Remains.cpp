#include <iostream>
#include <cmath>
#include <vector>
#include <cstdio>
using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    long long int t;    // t = number of test cases
    cin >> t;
    long long int x, y, n;   
           //x, y = Height of first & second building. n = number of buildings
    long long int sum;  //sum of the height of buildings


    int arr[3];     //Not required as pointed out by Juno

    long long int z;   //Temporary variable to store the height of next building
    for (long long int foo = 0; foo < t; foo++)
    {
        cin >> x >> y >> n;      //Takes the input 

        sum = x + y;    //Adds to sum the height of the first two buildings


        for (long long int i = 2; i < n; i++)
        {
            z = abs(x - y); 
            sum += z;
            x = y;
            y = z;
        }
        cout << sum << endl;
    }
}
