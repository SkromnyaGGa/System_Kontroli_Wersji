#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
void sum(int a, int b){
	int sum = 0;
<<<<<<< HEAD
	x = rand() % 1000100 + 1;
	y = rand() % 1010100 + 1;
	cout << x << " " << y << endl;
=======
	a = rand() % 101000 + 1;
	b = rand() % 101000 + 1;
	cout << a << " " << b << endl;
>>>>>>> abbbc1657fa1ec381361f6bcc0ea278ccc670aef
	
	cout << a+b;
}

int main(){
	long long unsigned int x;
	long long unsigned int y;
	srand(time(NULL));
	sum(a,b);
	return 0;
}
