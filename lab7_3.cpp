#include<iostream>
using namespace std;

char before(char x){
    if((int)x >=65 && (int)x <= 90){
        if((int)x == 65){
            x = 'Z';
            return x;
        }
        else{
            (int)x--;
            return x;
        }
    }
    else{
        x = '0';
        return x;
    }
}

int main(){
	cout << before('A') << "\n";
	cout << before('B') << "\n";
	cout << before('P') << "\n";
	cout << before('T') << "\n";
	cout << before('Z') << "\n";
	cout << before('a') << "\n";
	cout << before('0') << "\n";
	cout << before('c') << "\n";
	return 0;
}
