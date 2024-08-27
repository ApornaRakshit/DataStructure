#include <iostream>
//#include <vector>

using namespace std;

vector<int> runningSum(const vector<int>& nums) {
  int n = nums.size();
  vector<int> running_sums(n);
  running_sums[0] = nums[0];

  for (int i = 1; i < n; i++) {
    running_sums[i] = running_sums[i - 1] + nums[i];
  }

  return running_sums;
}

int main() {
  int n;
  cin >> n;

  vector<int> nums(n);
  for (int i = 0; i < n; i++) {
    cin >> nums[i];
  }

  vector<int> result = runningSum(nums);

  for (int i = 0; i < n; i++) {
    cout << result[i] << " ";
  }
  cout << endl;

  return 0;
}
