#include <vector>
#include <cmath>
using namespace std;

vector<int> sortedSquaredArray(vector<int> array) {
  for(int i=0;i<array.size();i++){
		array[i]=abs(array[i]);
		array[i]=pow(array[i],2);
		
	}
  sort(array.begin(),array.end());
	return array;
}
