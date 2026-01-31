#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void shuffle(int &,int &,int &,int &);

int main(){
	int a = 50, b = 100, c = 500, d = 1000;
	
	srand(time(0));	
	
	for(int i = 0;i < 10;i++){
	    shuffle(a,b,c,d);
	    cout << a << " " << b << " " << c << " " << d << endl;
	}
	
	return 0;
}

//Do not modify source code above this line

void shuffle(int &a,int &b,int &c,int &d){
	int bag[] = {a,b,c,d};
	int newbag[4];
	int x = rand()%4;
	for(int i=0;i<4;i++){
		newbag[i] = bag[(x+i)%4];
	}
	a = newbag[0];
	b = newbag[1];
	c = newbag[2];
	d = newbag[3];
}