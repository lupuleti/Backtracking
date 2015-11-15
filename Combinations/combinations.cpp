// Combinations
// Generating all the combinations of n taken k.
#include <iostream>

using namespace std;

// global variables
int n, k, array[25];

// Initialising the stack with 0's.
void initialization()
{
    cin >> n >> k;

    for (int i = 1; i <= k; i++)
        array[i] = 0;
}

// Printing function.
void print (int p)
{
    for (int i = 1 ; i <= p; i++)
        cout << array[i] << " ";
    cout << "\n";
} // print

// Condition for combinations.
// Each element from index i has to be greater than elements from
// previous indexes.
bool validation (int p)
{
    for (int i = 1; i <= p-1; i++)
        if( array[i] >= array[p])
            return false;
    return true;
}

// Recursive function for backtracking.
void backtracking(int p)
{
    for (int pvalue = 1; pvalue <= n; pvalue++)
    {
        array[p] = pvalue;
        if(validation(p) == true)
            if(p == k)
                print(p);
        else
            backtracking(p+1);
    } // for
} // backtracking

int main()
{
    initialization();
    backtracking(1);
    return 1;
}

