#include <iostream>
#include <vector>
#include <string>
int main() {
	int x;
	std::vector<int> data;
	while(std::cin>>x) {
		data.push_back(x);  //закидывает новый элеменt в кoнец вектора 
	}
	
	while(!data.empty() && data.back()==0) {
		data.pop_back();   //удаляет последний элемент
	}
	for(int el:data) {
		std::cout<<el<<" ";
	return 0;  
}
}
