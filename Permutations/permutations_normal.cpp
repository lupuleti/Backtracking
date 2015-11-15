// Permutations
// Generating all the permutations of n.
#include <iostream>

using namespace std;

// global variables
int n, array[25];

// Initialising the stack with 0's.
void initialization()
{
    cin >> n;

    for (int i = 1; i <= n; i++)
        array[i] = 0;
} // initialization

// Printing function.
void print()
{
    for (int i = 1 ; i <= n; i++)
        cout << array[i] << " ";
    cout << "\n";
} // print

// Condition for permutations.
// Elements have to be different.
bool validation (int p)
{
    for (int i = 1; i <= p-1; i++)
        if( array[i] == array[p])
            return false;
    return true;
} // validation

// Recursive function for backtracking.
void backtracking(int p)
{
    for (int pvalue = 1; pvalue <= n; pvalue++)
    {
        array[p] = pvalue;

        if(validation(p) == true)
            if(p == n)
            {
                print();
            }
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


