#include<iostream>
using namespace std;

int main() {
	char  b;
    cin>>b;
int ch = b;
   if (ch >= 'A' && ch <= 'Z') {
        cout << 1 << endl;
    }
    else if (ch >= 'a' && ch <= 'z') {
        cout << 0 << endl;
    }
    else {
        cout << -1 << endl;
    }
}
