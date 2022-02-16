#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
void sum(int x, int y){
	int sum = 0;
	x = rand() % 1000100 + 1;
	y = rand() % 1010100 + 1;
	cout << x << " " << y << endl;
	
	cout << x+y;
}

int main(){
	long long unsigned int a;
	long long unsigned int b;
	srand(time(NULL));
	sum(a,b);
	return 0;
}
