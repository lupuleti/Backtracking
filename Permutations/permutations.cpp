#include <iostream>
#include <string.h>
using namespace std;

// Function to change 2 values between them.
void swap (char *value1, char *value2)
{
  char temp = *value1;
  *value1 = *value2;
  *value2 = temp;
} // swap

void permutation (char *string, int start, int end)
{
	if (start == end)
	  cout << string << "\n";
	else
	{
	  for (int i = start; i <= end; i++)
	  {
	    swap(string+start, string+i);
	    permutation(string, start+1, end);
	    swap(string+start, string+i); // unwind the swap - backtraking.
	  } // for
	} // else
} // permutation
int main() {
	char array[] = "ABC";
	permutation(array, 0, strlen(array)-1);
	return 0;
} // main
