#include <algorithm>
#include <set>
#include <vector>
#include <numeric>

using namespace std;
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        std::sort(nums.begin(), nums.end());
        std::set<vector<int>> res;
        for(int i = 0; i<nums.size()-1;i++)
        {
            int j=i+1;
            int k=nums.size()-1;
            while(j<k)
            {
               int sum = nums[i] + nums[j] + nums[k];
                if(sum == 0)
                {
                    res.insert({nums[i], nums[j], nums[k]});
                    j++;
                    k--;
                }
                else if(sum < 0)
                    j++;
                else
                    k--;
            }
        }
        std::vector<vector<int>> ans;
        for(auto el:res)
            ans.push_back(el);
        return ans;
    }

};


//Best solution 
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> res;
        // Check less than 3 elements. 
        if (nums.size() < 3) {
            return res;
        }
        int min =  200000;
        int max = -200000;
        for (int i = 0; i < nums.size(); i++) {
            if (min > nums[i]) min = nums[i];
            if (max < nums[i]) max = nums[i];
            //if (nums[i] < 0) type |= 1;
            //if (nums[i] > 0) type |= 2;
        }
        const int range = -min;
        const int lsize = max-min+1;
        char lookup[lsize]; 
        for (int i = 0; i < lsize; i++) lookup[i] = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (lookup[nums[i]+range] < 3) lookup[nums[i]+range]++; 
        }
        int dsize = 0;
        for (int i = 0, j = 0; i < lsize; i++) {
            if (lookup[i] > 0) {
                nums[j++] = i-range;
                dsize++;
            }
        }
        vector<int>& distinct = nums;
        vector<int> triplet(3,0);
        // Check elements all positive or all negative.
        if (distinct[0] > 0 || distinct[dsize-1] < 0) {
            return res;
        } else if (dsize == 1) {
            if (distinct[0] == 0 && lookup[range]>2) {
                res.push_back(triplet);
            }
            return res;
        }
        const int high = distinct[dsize-1];
        const int zero_cnt = lookup[range];
        for (size_t i = 0; i < dsize; i++) {
            int iv = distinct[i];
            if (iv > 0) break;
            size_t j = (lookup[iv+range] > 1) ? i : i+1;
            for (; j < dsize; j++) {
                int jv = distinct[j];
                int n3 = 0 - iv - jv;
                if (jv > -iv/2) {
                    break;
                } else if (n3 > high || n3 < jv) {
                    continue;
                } else if (n3 == jv) {
                    if ((n3 == 0 && zero_cnt >= 3) || (n3 != 0 && lookup[n3+range] >= 2)) {
                        triplet[0] = iv;
                        triplet[1] = jv;
                        triplet[2] = n3;
                        res.push_back(triplet);
                    }
                } else {
                    if (lookup[n3+range]) {
                        triplet[0] = iv;
                        triplet[1] = jv;
                        triplet[2] = n3;
                        res.push_back(triplet);
                    }
                }
            }
        }
        return res;
    }
};

//Most submitted
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) 
    {
        sort(nums.begin() , nums.end());    //Sorted Array
        if(nums[0] > 0)
        {        //Base case 2
            return {};
        }
        vector<vector<int>> answer;
        for(int i = 0 ; i < nums.size() ; ++i){     //Traversing the array to fix the number.
            if(nums[i] > 0){     //If number fixed is +ve, stop there because we can't make it zero by searching after it.
                break;
            }
            if(i > 0 && nums[i] == nums[i - 1]){    //If number is getting repeated, ignore the lower loop and continue.
                continue;
            }
            int low = i + 1 , high = nums.size() - 1;   //Make two pointers high and low, and initialize sum as 0.
            int sum = 0;
            while(low < high){                          //Search between two pointers, just similiar to binary search.
                sum = nums[i] + nums[low] + nums[high];
                if(sum > 0){   //If sum is +ve, means, we need more -ve numbers to make it 0, decreament high (high--).
                    high--;
                } else if(sum < 0){ //If sum is -ve, means, we need more +ve numbers to make it 0, increament low (low++).
                    low++;
                } else {
                    answer.push_back({nums[i] , nums[low] , nums[high]});  //we have found the required triplet, push it in answer vector
                    int last_low_occurence = nums[low] , last_high_occurence = nums[high];  //Now again, to avoid duplicate triplets, we have to navigate to last occurences of num[low] and num[high] respectively
                    while(low < high && nums[low] == last_low_occurence){   // Update the low and high with last occurences of low and high.
                        low++;
                    }
                    while(low < high && nums[high] == last_high_occurence){
                        high--;
                    }
                }
            }
        }
        return answer;      //Return the answer vector.
    }
};