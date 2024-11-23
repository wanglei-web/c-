// #include <iostream>
// #include <algorithm>
// #include <list>
// #include <vector>
// #include <string>
// using namespace std;

// struct Goods
// {
// 	string _name;  // 名字
// 	double _price; // 价格
// 	int _evaluate; // 评价

// 	Goods(const char* str, double price, int evaluate)
// 		:_name(str)
// 		, _price(price)
// 		, _evaluate(evaluate)
// 	{}
// };

// struct Compare1
// {
// 	bool operator()(const Goods& gl, const Goods& gr)
// 	{
// 		return gl._evaluate < gr._evaluate;
// 	}
// };

// struct ComparePriceLess
// {
// 	bool operator()(const Goods& gl, const Goods& gr)
// 	{
// 		return gl._price < gr._price;
// 	}
// };

// struct ComparePriceGreater
// {
// 	bool operator()(const Goods& gl, const Goods& gr)
// 	{
// 		return gl._price > gr._price;
// 	}
// };

// int main()
// {
// 	vector<Goods> v = {{"苹果", 2.1, 5 }, { "香蕉", 3, 4 }, { "橙子", 2.2, 3 }, { "菠萝", 1.5, 4 }};
// 	//sort(v.begin(), v.end()); 自定义类型没重载<不能用less或者greater

//     cout<<  sizeof(Goods)<<endl;
//     cout<<  sizeof(v)<<endl;
// 	sort(v.begin(), v.end(), Compare1());
// 	sort(v.begin(), v.end(), ComparePriceLess());
// 	sort(v.begin(), v.end(), ComparePriceGreater());

//     sort(v.begin(), v.end(), [](Goods &a,Goods &b){return  a._evaluate<b._evaluate;});

// 	return 0;
// }

#include <iostream>
#include <vector>
#include <map>
#include <string>
using namespace std;


#define MIN(A,B) ((A) <= (B) ? (A) : (B))
// otherDevices能够保存数据
int main(int argc, char *argv[])
{

	 cout<<  MIN(1,2) <<endl;
	return 0;
}