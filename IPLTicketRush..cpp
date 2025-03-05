#include <bits/stdc++.h>
using namespace std;

int main() {
	int T,num_students,num_tickets;
	std::cin >> T;
	while(T--){
	    std::cin >> num_students >> num_tickets;
	    if(num_students <= num_tickets){
	        std::cout << 0 << std::endl;
	    }
	    else{
	        std::cout << num_students - num_tickets << std::endl;
	    }
	}

}
