#include <iostream>

using namespace std;
#define MAX_SIZE 25
int n, array[MAX_SIZE];

void initialization()
{
    cin >> n;

    for(int i = 1; i <= n; i++)
        array[i] = 0;
} // initialization

void print()
{
    for(int i = 1; i <= n; i++)
        cout << array[i] << " ";
    cout << "\n";
} // print

bool validation(int p)
{
    for (int i = 1; i <= p-1; i++)
    {
        if (array[i] == array[p])
            return false;
        //if (array)
        int i1 = array[p]; int i2 =p;
        while( i1 <=n && i2 >= 1)
        {
            i1++; i2--;
            if( i1 == array[i] && i2 == i)
            return false;
        }
        i1 = array[p]; i2 =p;
        while( i1 <=n && i2 <= n)
        {
            i1++; i2++;
            if( i1 == array[i] && i2 == i)
            return false;
        }
            i1 = array[p]; i2 =p;
        while( i1 >= 1 && i2 >= 1)
        {
            i1--; i2--;
            if( i1 == array[i] && i2 == i)
            return false;
        }
                 i1 = array[p]; i2 =p;
        while( i1 >= 1 && i2 <= n)
        {
            i1--; i2++;
            if( i1 == array[i] && i2 == i)
            return false;
        }
    }
    return true;

}

void backtracking(int p)
{
    for (int pvalue = 1; pvalue <= n; pvalue++)
    {
        array[p] = pvalue;
        if (validation(p))
            if (p == n)
                print();
            else
                backtracking(p+1);
    } // for
} // backtracking


int main ()
{
    initialization();
    backtracking(1);
}

