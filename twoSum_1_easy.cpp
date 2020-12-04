//
// Created by 胡广行 on 2020/12/4.
//
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>answer;
        int flag = 0;
        for(int i = 0;i < nums.size();i++){
            for(int j = i + 1; j < nums.size();j++){
                if((nums[i] + nums[j]) == target){
                    flag = 1;
                    answer.push_back(i);
                    answer.push_back(j);
                    break;
                }
            }
            if(flag == 1)
                break;
        }
        return answer;
    }
};


int main(){
    int target = 10;
    vector<int>answer;
    vector<int>nums = {1, 3, 2, 8, 4, 9} ;
    Solution solution;
    answer = solution.twoSum(nums,target);
}

//下面是采用unorder_map方式所写的代码，值得学习
/*
public:
vector twoSum(vector& nums, int target) {
    // This is a map of numbers and their indices. For instance, consider
    // the input [2, 7, 11, 15], the map will be [(2:0), (7:1), (11:1),
    // (15:1)].
    //
    std::unordered_map a;

    int size = (int)nums.size();

    for (int i = 0; i < size; ++i) {
        // This if statement becomes true when the difference between
        // the target number and current number (which is required for our pair),
        // is already present in the map, in which case, we just return our current
        // index and the index of the difference, which we get using our map.
        //
        if (a.find(target - nums[i]) != a.end()) {
            return {a[target - nums[i]], i};
        }
            // If we didn't find the difference, we just create another entry in our
            // unordered map as shown here.
            //
        else {
            a.insert({nums[i], i});
        }
    }
    return {};
}
};*/
