// class Solution {
// public:
//     vector<int> twoSum(vector<int>& nums, int target) {
//         vector < pair < int,int>>A;
//         for(int i = 0 ; i< nums.size() ;i++){

//         A.push_back({nums[i],i});
//         }
//         sort(A.begin() ,A.end());
//         int i =0 , j = nums.size()-1;
//         while(i<j){
//             int cur = A[i].first+ A[j].first;
//             if(cur == target){
//                 return{min(A[i].second , A[j].second),
//                       max(A[i].second , A[j].second)};
//             }
//             else if (cur < target){
//                 i++;
//             }
//             else{
//                 j--;
//             }
            
//         }
//         return{};
//     }
// };


class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>A;
        for(int i=0 ; i< nums.size(); i++){
            A[nums[i]]= i;

        }
        for(int i = 0 ; i<nums.size(); i++){
            int diff = target - nums[i];
            if(A.count(diff)&& A[diff] !=i){
                return {i , A[diff]};

            }
        }
        return {};

    }
    
};

