#include <bits/stdc++.h>
using namespace std;

int main() {
	int T,XHertz;
	std::cin >> T;
	while(T--){
	    std::cin >> XHertz;
	    if(XHertz>=67 && XHertz<=45000){
	        std::cout << "YES" << std::endl;
	    }
	    else{
	        std::cout << "NO" << std::endl;
	    }
	}

}
