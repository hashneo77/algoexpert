#include <vector>
using namespace std;

vector<vector<int>> threeNumberSum(vector<int> array, int targetSum) {
  unordered_map<int,bool> umap;
	vector<vector<int>> s;
	vector<int>s1;
	for(auto x : array){
		if(umap.find(x)==umap.end())
			umap[x]=true;
	}
	sort(array.begin(),array.end());
	for(int i=0;i<array.size()-1;i++)
		for(int j=i+1;j<array.size();j++){
			if(umap.find(targetSum-array[i]-array[j])!=umap.end()&&(targetSum-array[i]-array[j])!=array[i]&&(targetSum-array[i]-array[j])!=array[j]){
				s1.push_back(array[i]);
				s1.push_back(array[j]);
				s1.push_back(targetSum-array[i]-array[j]);
				s.push_back(s1);
				s1.clear();
			}
		}
	
  return s;
}
