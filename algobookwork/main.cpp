#include <bits/stdc++.h>
using namespace std;

int main () {
    double X;
    cin >> X;
    double romanPace = ((5280/double(4854)) * 1000.0) * X;
	cout << round(romanPace) << "\n";    
   	cout << romanPace << "\n"; 
    return 0;
}
