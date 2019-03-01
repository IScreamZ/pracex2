#include <iostream>
#include<fstream>
#include<string>
#include<cstdlib>
using namespace std;

void sort(float x[], int N){
	for(int i = 1; i < N; i++){
		for(int j = i; j > 0; j--){
			if(x[j] < x[j-1]){
				float temp = x[j];
				x[j] = x[j-1];
				x[j-1] = temp;
			}else{
				break;
			} 
		}
	}
}

int main(){
	int n=0,r=0;
	float score[20];
	ifstream source("score1.txt");
	string line;
	while(getline(source,line)){
		score[n]=atof(line.c_str());
		n++;
	}
	source.close();
	sort(score,n);
	ofstream write("rank.txt");
	for(int x=0;x<n;x++){
		for(int y=0 ; y<20 ; y++){
			if (score[19-x]==score[20+y-x]) r--;
		}
		if(x==0) write<<score[19-x]<<"="<<x+1;
		else {
			write<<"\n"<<score[19-x]<<"="<<x+1+r;
		}
		r=0;
	}
	write.close();
	return 0;
}