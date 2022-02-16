#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
void sum(int a, int b){
	int sum = 0;
	a = rand() % 101000 + 1;
	b = rand() % 101000 + 1;
	cout << a << " " << b << endl;
	
	cout << a+b;
}

int main(){
	long long unsigned int x;
	long long unsigned int y;
	srand(time(NULL));
	sum(a,b);
	return 0;
}
