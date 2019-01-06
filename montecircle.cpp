// Program to add two integers typed by user at keyboard
#include <iostream>
#include <cstdlib>
#include <cstdio>

using namespace std;

#define ranf() \
  ((double)rand()/(1.0+RAND_MAX)) // Uniform from interval [0,1)

int main(int argc, char* argv[])
{
  int outcome, N=10, count_in=0, seed=123;
  double fraction_in;

  if(argc>1)
  {
    sscanf( argv[1], "%d", &N ) ; // put the first command-line argument
  }
  if(argc>2)
  {
    sscanf( argv[2], "%d", &seed ) ; // put the 2nd argument in seed
  }
  // Write out a summary of parameters

  cout << "# " << argv[0] << " N=" << N << " seed=" << seed << endl;
}

  ////continue late 
}
