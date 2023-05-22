#include <vector>
#include <iostream>
#include <string>
using namespace std;
class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
    //create all possible triples
    //find the sum for each and the difference update the minSum
    int minDifferenceSum = nums[0] + nums[1] + nums[2];
    int minDifference = abs(target - minDifferenceSum);

    int currDiff;
    int currSum;
    for(int i = 0; i < nums.size(); i++){
        for(int k = i + 1; k < nums.size(); k++){
            for(int j = k + 1; j < nums.size(); j++){
                currSum  = nums[i] + nums[j] + nums[k];
                currDiff = abs(target - currSum);
                if(currDiff < minDifference){
                    minDifferenceSum = currSum;
                    minDifference = currDiff;
                } 
            }
        }
    }
    return minDifference;    
    }
};


int main(){
	Solution mySolution;
	// you can initialize the vector in any way you want
	vector<int> myNums;
	myNums.push_back(-1);
	myNums.push_back(2);
	myNums.push_back(1);
	myNums.push_back(-4);
	int result = mySolution.threeSumClosest(myNums,0);
	cout << result;
	return 0;
}