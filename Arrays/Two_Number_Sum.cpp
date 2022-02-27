#include <vector>
using namespace std;

vector<int> twoNumberSum(vector<int> array, int targetSum) {
  unordered_map<int,int> umap;
	vector<int> nums;
	for(int i=0;i<array.size();i++){
		umap[array[i]] = 1;
	}
	for(int i=0;i<array.size();i++){
		if(umap[targetSum-array[i]]==1 && targetSum-array[i]!=array[i]){
			nums.push_back(array[i]);
			nums.push_back(targetSum-array[i]);
			return nums;
		}
	}
  return nums;
}
