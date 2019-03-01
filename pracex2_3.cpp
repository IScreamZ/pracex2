#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
char alphabet[8][8];

void showAlphabet();
void randomAlphabet();

int main(){
	srand(time(0));	
	randomAlphabet();
	showAlphabet();
}

void showAlphabet(){
	for(int i = 0; i < 8; i++){
		for(int j = 0; j < 8; j++){
			cout << alphabet[i][j] << " ";
		}
		cout << "\n";
	}
}

//Write definition of function randomAlphabet() here.
void randomAlphabet(){
	for(int x=0;x<8;x++){
		for(int y=0;y<8;y++){
			alphabet[x][y] = rand()%26+97;
		}
	}
}