#include "BSTree.h"
#include<iostream>
using namespace std;

int main()
{
	BSTree<int> t;
	t.insert(62);
	t.insert(58);
	t.insert(47);
	t.insert(51);
	t.insert(35);
	t.insert(37);
	t.insert(88);
	t.insert(73);
	t.insert(99);
	t.insert(93);
	t.insert(95);

	cout << endl << "中序遍历：" << endl;
	t.inOrder();

	cout << "max Element:" << t.search_maximum() << endl;
	cout << "min Element:" << t.search_minimun() << endl;

	cout << "删除元素99" << endl;
	t.remove(99);

	cout << "最大元素:" << t.search_maximum() << endl;

	t.destory();

	getchar();
	return 0;
}
