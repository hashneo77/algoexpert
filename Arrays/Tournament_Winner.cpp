#include <vector>
using namespace std;

string tournamentWinner(vector<vector<string>> competitions,
                        vector<int> results) {
	unordered_map<string,int> umap;
	int j=0;
	for(int i=0;i<results.size();i++){
		if(umap.find(competitions[j][(results[i]+1)%2])==umap.end())
			umap[competitions[j][(results[i]+1)%2]] = 30;
			else{
				umap[competitions[j][(results[i]+1)%2]] = umap[competitions[j][(results[i]+1)%2]] + 30;
			}
			j++;
		}
	string s;
	int max= INT_MIN;
	for (auto itr = umap.begin(); itr != umap.end(); itr++){
		if(itr->second>max){
			max = itr->second;
			s = itr->first;
		}
	}
  // Write your code here.
  return s;
}
