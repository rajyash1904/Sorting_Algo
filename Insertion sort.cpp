#include<bits/stdc++.h>
using namespace std;


void printarr (vector < int >&a)
{

  for (int i = 0; i < a.size (); i++)
    {
      cout << a[i] << " ";
    }
  cout << endl;
}


/*void swap (vector < int >&a, int j, int i)
{
  int t = a[j];
  a[j] = a[i];
  a[i] = t;
  return;
}*/

void insertion_sort(vector<int> &a){
    int n=a.size();
    
    for(int i=1;i<n;i++){
        int key=a[i];
        int j=i-1;
        while(j>=0 && a[j]>key){
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=key;
    }
    printarr(a);
    return;
    
}

int
main ()
{

  vector < int >a = { 25, 360, 39, 9000, 1000 };
  insertion_sort (a);
  return 0;
}
