#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector< vector<int> > threeSum(vector<int>& nums) {
        int n = nums.size();
        vector< vector<int> > ans;
        sort(nums.begin(), nums.end());
        
        for (int i = 0; i < n; i++) {
            if (i > 0 && nums[i] == nums[i - 1])
                continue; // Skip duplicates for i
            
            int j = i + 1;
            int k = n - 1;
            
            while (j < k) {
                long long sum = nums[i];
                sum += nums[j];
                sum += nums[k];
                
                if (sum > 0)
                    k--;
                else if (sum < 0)
                    j++;
                else {
                    vector<int> t;
                    t.push_back(nums[i]);
                    t.push_back(nums[j]);
                    t.push_back(nums[k]);
                    ans.push_back(t);
                    
                    j++;
                    k--;
                    
                    while (j < k && nums[j] == nums[j - 1]) j++;
                    while (j < k && nums[k] == nums[k + 1]) k--;
                }
            }
        }
        return ans;
    }
};

int main() {
    Solution obj;
    int n;
    
    cout << "Enter number of elements: ";
    cin >> n;
    
    vector<int> nums(n);
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++)
        cin >> nums[i];
    
    vector< vector<int> > result = obj.threeSum(nums);
    
    cout << "\nUnique triplets that sum to 0 are:\n";
    if (result.empty())
        cout << "No triplets found.\n";
    else {
        for (int i = 0; i < result.size(); i++) {
            cout << "[ ";
            for (int j = 0; j < result[i].size(); j++) {
                cout << result[i][j] << " ";
            }
            cout << "]\n";
        }
    }
    
    return 0;
}

