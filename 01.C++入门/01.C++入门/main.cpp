#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;//C++���е����ж������Ƿŵ�std�����ռ��е�

//һ��C++�ؼ���
//C++�ܼ�63���ؼ��֣�C����32���ؼ���




//���������ռ�
//ʹ�������ռ��Ŀ���ǶԱ�ʶ�������ƽ��б��ػ����Ա���������ͻ��������Ⱦ��namespace�ؼ��ֵĳ��־���������������
//1.�����ռ�Ķ���
//����ͨ�������ռ�
//namespace N1//N1Ϊ�����ռ������
//{
//	//�����ռ��е����ݣ��ȿ��Զ��������Ҳ���Զ��庯��
//	int a;
//	int Add(int left, int right)
//	{
//		return left + right;
//	}
//}


//�������ռ����Ƕ��
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


//��ͬһ��������������ڶ����ͬ���Ƶ������ռ䣬����������ϳ�ͬһ�������ռ���
//namespace N1
//{
//	int Mul(int left, int right)
//	{
//		return left * right;
//	}
//}
//ע��һ�������ռ�Ͷ�����һ���µ������������ռ��е��������ݶ�������������ռ���


//2.�����ռ��ʹ��
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
//��ʽ�٣��������ռ����Ƽ���ҵ���޶���
//int main()
//{
//	printf("%d\n", N::a);
//	return 0;
//}
//��ʽ�ڣ�ʹ��using�������ռ��г�Ա���� -- �ڹ�����Ŀ���Ƽ������÷�
//using N::a;
//int main()
//{
//	printf("%d\n", a);
//	return 0;
//}
//��ʽ�ۣ�ʹ��using namespace�����ռ��������� -- ���ճ���ϰ�У����ں�����������ͻ
//using namespace N;
//int main()
//{
//	printf("%d\n", a);
//	printf("%d\n", b);
//	Add(10, 20);
//	return 0;
//}




//����C++����&���
//using namespace std;
//int main()
//{
//	cout << "hello world" << endl;
//	return 0;
//}
//ʹ��cout��׼�����cin��׼����ʱ���������<iostream>ͷ�ļ��Լ�std��׼�����ռ�


//ʹ��C++������������㣬����Ҫ�������ݸ�ʽ����
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




//�ġ�ȱʡ���� --> ��̥
//void Func(int a = 0) //�βε�ȱʡ
//{
//	cout << a << endl;
//}
//int main()
//{
//	Func(10);
//	Func();
//	return 0;
//}


//ȫȱʡ����
//void Func(int a = 10, int b = 20, int c = 30)
//{
//	cout << "a = " << a << endl;
//	cout << "b = " << b << endl;
//	cout << "c = " << c << endl;
//}
//int main()
//{
//	//���ֵ��÷�ʽ
//	Func();
//	Func(1);
//	Func(1, 2);
//	Func(1, 2, 3);
//	return 0;
//}


//��ȱʡ����(ȱʡ���ֲ���) -- û��ȱʡ��λ�ñ��봫�� -- ���������������ȱʡ
//void Func(int a, int b = 20, int c = 30)
//{
//	cout << "a = " << a << endl;
//	cout << "b = " << b << endl;
//	cout << "c = " << c << endl;
//}
//int main()
//{
//	//����ʱ�����Ҫ���α���������������δ��Σ����ܿ�ȱ
//	Func(1);
//	Func(1, 2);
//	Func(1, 2, 3);
//	return 0;
//}
