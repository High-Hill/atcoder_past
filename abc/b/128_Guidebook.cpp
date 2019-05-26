#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Restaurant {
  int no;
  string city;
  int point;
  bool operator<(const Restaurant& another) const {
    if (city != another.city)
      return city < another.city;
    if (point != another.point)
      return point > another.point;
    return no < another.no;
  }
};

int main() {
  int n;
  cin >> n;
  vector<Restaurant> vec(n);
  for (int i = 0; i < n; i++){
    cin >> vec[i].city >> vec[i].point;
    vec[i].no = i+1;
  }
  sort(vec.begin(), vec.end());
  for (int i = 0; i < vec.size(); i++) cout << vec[i].no << endl;;
  return 0;
}
