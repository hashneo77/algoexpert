using namespace std;

bool isValidSubsequence(vector<int> array, vector<int> sequence) {
  int arrIndex = 0;
	int seqIndex = 0;
	while(arrIndex<array.size() && seqIndex<sequence.size()){
		if(array[arrIndex]==sequence[seqIndex]){
			seqIndex++;
		}
		arrIndex++;
	}
	return seqIndex == sequence.size();
}
