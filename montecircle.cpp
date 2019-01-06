// Find pi with montecarlo ./file 30 2112 (Run with N=30 and seed= 1112)
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

  ////init random number generator
  srandom(seed);

  //Perform N experiments
  for(int n=1; n<=N; n++) {
    double x=ranf();
    double y = ranf();
    outcome = (x*x + y*y < 1.0) ? 1 : 0;
    count_in += outcome;

    fraction_in = static_cast<double>(count_in)/n;
    cout <<"location" << outcome << "\t" << x << "\t" << y << "\t" << count_in << "\t" << n << "\t" << 4.0 * fraction_in << endl;
  }
  return 0;
}
