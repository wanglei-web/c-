// #include <iostream>
// #include <vector>
// #include <string>

// using namespace std;

// void vectorTest() {
// 	vector<int> ve{ 1,2,3,4,5,6,7,8,9 };
// 	cout << "删除前：" << endl;
// 	for (auto v : ve) cout << v << " ";
// 	cout << endl;

// 	auto it = ve.begin() + 3;		//元素4对应的迭代器
// 	auto it_next = ve.begin() + 4;	//元素4下一个元素对应的迭代器
// 	//通过迭代器删除元素 4
// 	auto it1 = ve.erase(it);		//it1是删除当前元素返回的下一个有效的迭代器

// 	//当前删除元素对应的迭代器和其后面元素对应的迭代器都失效了
// 	//cout << "删除的元素：" << *it << endl;	//当前迭代器失效，此行报错:引发了异常: 读取访问权限冲突。
// 	//cout <<"删除元素后面元素对应的迭代器"<< *it_next << endl;	//it后面的迭代器都失效了，此行报错
//  	it = ve.begin() + 3;

// 	cout << *it << endl;
	

// 	for (auto v : ve) cout << v << " ";
// 	cout << endl;
// }

// int main() {
// 	vectorTest();
// 	return 0;
// }



// #include <iostream>
// #include <algorithm>
// #include <list>
// #include <string>
// using namespace std;

// void listTest() {
// 	list<int> li{ 1,2,3,4,5,6,7,8,9 };


// 	for (auto it = li.begin(); it != li.end(); ++it) {
// 		cout << *it << " ";
// 	}
// 	cout << endl;

// 	auto it = find(li.begin(), li.end(), 5);
// 	auto it_next = find(li.begin(), li.end(), 6);

// 	auto it2 = li.erase(it);//删除元素5

// 	//cout << *it << endl;//报错，当前迭代器失效
// 	cout << *it_next << endl;//说明删除元素后面元素对应的迭代器不会失效
// 	cout << *it2 << endl;


// 	for (auto it = li.begin(); it != li.end(); ++it) {
// 		cout << *it << " ";
// 	}
// 	cout << endl;
// }

// int main() {
// 	listTest();
// 	return 0;
// }


#include <iostream>
#include <algorithm>
#include <list>
#include <string>
using namespace std;


//动态转换可以自动向上转换，向下转换需要基类有虚函数， 父类指针-》父类对象转为子类指针 直接返回空指针
//父类指针-》子类对象转为子类指针 直接转为子指针
class A
{

public:
	A(){};
	virtual void f() {
		cout<<1<<endl;
	}
};

class B : public A
{
public:
	B(){};
	void f()
	{
    cout<<2<<endl;
	}
};
//pa可能指向父类对象，也可能指向子类对象

int main()
{

	// A* b = new A;

	// B* bb = dynamic_cast<B*>(b); //安全
	// cout<< bb<<endl;
	// bb->f();

	const int a = 10;      			//volatile防止编译器优化，让a每次都从内存读值
	cout << a << endl;              //此时a的值为10
	int *p = const_cast<int*>(&a);  //常量对象转换为非常量对象
	*p = 20;
	cout << a << endl;              //此时a的值为20

	return 0;

}


