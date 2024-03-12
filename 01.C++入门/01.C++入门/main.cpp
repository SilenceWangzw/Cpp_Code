#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;//C++库中的所有东西都是放到std命名空间中的

//一、C++关键字
//C++总计63个关键字，C语言32个关键字




//二、命名空间
//使用命名空间的目的是对标识符的名称进行本地化，以避免命名冲突或名字污染，namespace关键字的出现就是针对这种问题的
//1.命名空间的定义
//①普通的命名空间
//namespace N1//N1为命名空间的名称
//{
//	//命名空间中的内容，既可以定义变量，也可以定义函数
//	int a;
//	int Add(int left, int right)
//	{
//		return left + right;
//	}
//}


//②命名空间可以嵌套
//namespace N2
//{
//	int a;
//	int b;
//	int Add(int left, int right)
//	{
//		return left + right;
//	}
//	namespace N3
//	{
//		int c;
//		int d;
//		int Sub(int left, int right)
//		{
//			return left - right;
//		}
//	}
//}


//③同一个工程中允许存在多个相同名称的命名空间，编译器最后会合成同一个命名空间中
//namespace N1
//{
//	int Mul(int left, int right)
//	{
//		return left * right;
//	}
//}
//注：一个命名空间就定义了一个新的作用域，命名空间中的所有内容都局限与该命名空间中


//2.命名空间的使用
//namespace N
//{
//	int a = 10;
//	int b = 20;
//	int Add(int left, int right)
//	{
//		return left + right;
//	}
//	int Sub(int left, int right)
//	{
//		return left - right;
//	}
//}
//方式①：加命名空间名称及作业域限定符
//int main()
//{
//	printf("%d\n", N::a);
//	return 0;
//}
//方式②：使用using将命名空间中成员引入 -- 在工程项目中推荐这种用法
//using N::a;
//int main()
//{
//	printf("%d\n", a);
//	return 0;
//}
//方式③：使用using namespace命名空间名称引入 -- 在日常练习中，不在乎跟库命名冲突
//using namespace N;
//int main()
//{
//	printf("%d\n", a);
//	printf("%d\n", b);
//	Add(10, 20);
//	return 0;
//}




//三、C++输入&输出
//using namespace std;
//int main()
//{
//	cout << "hello world" << endl;
//	return 0;
//}
//使用cout标准输出和cin标准输入时，必须包含<iostream>头文件以及std标准命名空间


//使用C++输入输出更方便，不需要增加数据格式控制
//int main()
//{
//	int a = 0;
//	double b = 0;
//	char c = 0;
//
//	cin >> a;
//	cin >> b;
//	cin >> c;
//	
//	cout << a << endl;
//	cout << b << endl;
//	cout << c << endl;
//
//	return 0;
//}




//四、缺省参数 --> 备胎
//void Func(int a = 0) //形参的缺省
//{
//	cout << a << endl;
//}
//int main()
//{
//	Func(10);
//	Func();
//	return 0;
//}


//全缺省参数
//void Func(int a = 10, int b = 20, int c = 30)
//{
//	cout << "a = " << a << endl;
//	cout << "b = " << b << endl;
//	cout << "c = " << c << endl;
//}
//int main()
//{
//	//四种调用方式
//	Func();
//	Func(1);
//	Func(1, 2);
//	Func(1, 2, 3);
//	return 0;
//}


//半缺省参数(缺省部分参数) -- 没有缺省的位置必须传参 -- 必须从右往左连续缺省
//void Func(int a, int b = 20, int c = 30)
//{
//	cout << "a = " << a << endl;
//	cout << "b = " << b << endl;
//	cout << "c = " << c << endl;
//}
//int main()
//{
//	//调用时，如果要传参必须从做左往右依次传参，不能空缺
//	Func(1);
//	Func(1, 2);
//	Func(1, 2, 3);
//	return 0;
//}
