#include <vector>
#include <iostream>

int main(){
	
	std::vector<int> A {1,5,2457,45,1,24,74,1};
	int n = A.size();
	bool* deleted = new bool[n]();

	for(int i = 0; i<n; i++){
		for(int j = i+1; j<n; j++){
			if(A[i] == A[j]){
				deleted[i] = true;
				deleted[j] = true;
			}
		}
	}

	for(int i = 0; i<n; ++i){
		if(!deleted[i]){
			std::cout << A[i] << ' ';
		}
	}

	delete[] deleted;

	return 0;
}
