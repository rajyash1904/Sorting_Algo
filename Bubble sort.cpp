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
bubble_sort (vector < int >&a)
{
  int n = a.size ();
  bool swp = false;
  for (int i = n - 1; i > 0; i--)
    {
      swp = false;
      for (int j = 0; j < i; j++)
	{

	  if (a[j] > a[j + 1])
	    {
	      swap (a, j, j + 1);
	      swp = true;
	    }
	}
      if (swp == false)
	break;
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
