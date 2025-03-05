#include <bits/stdc++.h>
using namespace std;

int main() {
	int bones, blood;
	std::cin >> bones >> blood;
    int bones_treat, blood_treat;
    std::cin >> bones_treat >> blood_treat;
    int total_treat = (bones*bones_treat)+(blood*blood_treat);
    std::cout << total_treat << std::endl;
}
