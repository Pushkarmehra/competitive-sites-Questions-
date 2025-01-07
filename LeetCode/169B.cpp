#include <iostream>
#include <vector>
using namespace std;
int majorElement(vector<int> arr, int ans) {
  int count = 0;
  for (int i = 0; i < arr.size(); i++) {
    for (int j = 0; j < arr.size(); j++) {
      if (arr[i] == arr[j]) {
        count++;
      }
    }
    if (arr.size() / 2 < count) {
      ans = arr[i];
      return ans;
    } else {
      count = 0;
    }
  }
  return 0;
}
int main() {
  vector<int> arr = {1, 1, 2, 2, 1};
  int ans = 0;
  cout << majorElement(arr, ans) << endl;
}//brute force
