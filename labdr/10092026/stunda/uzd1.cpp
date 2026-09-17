#include <iomanip>
#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
  cout << "ievadi grādus F ==>";
  int x;
  cin >> x;
  float c = 5.0 / 9.0 * (x - 32);
  cout << fixed << setprecision(1);
  cout << "C==" << c << "\n";
  return 0;
}

/********
 F    rezultats
 180    82.2
 -50    -45.6
 20     -6.7
 **********/
