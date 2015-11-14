#include <iostream>
#include <vector>

using namespace std;

int main() {
  vector<int> v;

  v.push_back(1);
  v.push_back(2);
  v.push_back(3);

  for(vector<int>::iterator it = v.begin(); it != v.end(); ++it) {
    cout << *it << "\n";
  }

  cout << v.front() << "\n";
  cout << v.back() << "\n";

}
