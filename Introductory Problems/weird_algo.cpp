#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <queue>
#include <stack>
#include <set>
#include <map>
#include <unordered_map>
#include <unordered_set>
#include <deque>
#include <numeric>
#include <cmath>
#include <climits>
using namespace std;

int main()
{
    long long int n;
    cin >> n;

    while (true)
    {
        if (n == 1)
        {
            cout << n << " ";
            break;
        }
        if (n % 2 == 0)
        {
            cout << n << " ";
            n /= 2;
            if (n == 1)
            {
                cout << n << " ";
                break;
            }
        }
        else
        {
            cout << n << " ";
            n = n * 3 + 1;
        }
    }

    return 0;
}