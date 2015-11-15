#include <iostream>
#include <vector>

using namespace std;

int main() {
  int array[] = {1,2,3};
  vector<int> v(array, array+3);
  
  for(vector<int>::iterator it = v.begin(); it != v.end(); ++it) {
    cout << *it << "\n";
  }

}
