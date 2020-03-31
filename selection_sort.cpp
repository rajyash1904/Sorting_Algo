#include<bits/stdc++.h>
using namespace std;


void
printarr (vector < int >&a)
{

  for (int i = 0; i < a.size (); i++)
    {
      cout << a[i] << " ";
    }
  cout << endl;
}


void
swap (vector < int >&a, int j, int i)
{
  int t = a[j];
  a[j] = a[i];
  a[i] = t;
  return;
}

void
selection_sort (vector < int >&a)
{
  int n = a.size ();

  for (int i = 0; i < n; i++)
    {
      int min_index = i;
      for (int j = i + 1; j < n; j++)
	{
	  if (a[j] < a[min_index])
	    {
	      min_index = j;
	    }
	}
      swap (a, min_index, i);
    }
  printarr (a);
  return;
}

int
main ()
{

  vector < int >a = { 25, 360, 39, 9000, 1000 };
  selection_sort (a);
  return 0;
}
