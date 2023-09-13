#include <iostream>
#include <string.h>
using namespace std;

// "Hello, World!" 문자열을 둘로 나누어 이중포인터를 활용해 메모리 하나 만을 사용하여 둘로 나뉜 문자열 각각 출력.
string DoublePointer(string** Dptra) //이중포인터를 활용하여 main()함수 내의 변수 a의 문자열을 바꾸는 함수
{
	return **Dptra = "World!"; //이중포인터로 바꿀 내용 Hello,  -> World!
}

int main()
{
	string a = "Hello, ";
	string* ptra = &a; //a의 주소를 가리키는 포인터변수 ptra 선언
	cout << a; //우선 변경 이전(기존)a를 출력
	cout << DoublePointer(&ptra) << endl; //이후 변경된 a 출력

	//이해되지 않는 부분.
	a = "Hello, ";
	cout << a << DoublePointer(&ptra) << endl; // 15번, 16번 코드와 같은 결과를 예상하였으나, 기존 a가 Hello, 가 아닌 World!가 출력됨.
	//알아보기 : ( 15번, 16번 코드와 20번 코드의 실행결과가 다른 이유 찾기

	return 0;
}