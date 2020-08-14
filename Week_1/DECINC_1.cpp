#include <iostream>
using namespace std;

int main() {
	int x;
	cin >> x;
	if(x % 4 == 0){
	    x++;
	}
	else{
	    x--;
	}
	cout << x;
	return 0;
}
