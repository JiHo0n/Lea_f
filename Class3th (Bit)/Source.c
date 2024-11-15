#include <stdio.h>

void main()

{
#pragma region 비트
	// 데이터를 나타내는 최소의 단위이며, 0 또는 1의
	// 조합으로 논리 계산을 수행하는 단위입니다.

	char alphbet = 15; // [0][0][0][0][1][1][1][1]

#pragma region (10)진수를 (2)진수로 변환하는 과정
	// 10진수를 1이 될 때까지 계속 2로 나누어 준 다음
	// 나눈 위치의 나머지 값을 아래에서 위로 순서대로
	// 정렬합니다.

#pragma endregion

#pragma region  (2)진수를 (10)진수로 변환하는 과정
	// 1 byte에 2진수로 저장된 값을 2의 제곱으로
	// 표현하며, 각각의 비트에 1이 있다면 1과 2의
	// 제곱의 위치를 계산한 다음 각각의 비트를 모두
	// 더하여 10 진수로 나타냅니다.
#pragma endregion



	// 메모리는 비트 단위로 데이터를 저장할 수 있으며,
	// 1개의 비트에는 0또는 1의 값만 저장할 수 있습니다.
#pragma endregion

#pragma region 비트 연산자
	// 비트 단위로 논리 연산을 수행하기 위해
	// 사용하는 연산자입니다.

#pragma region AND 연산자
	// 두개의 피연산자가 모두 1이면 1을 반환
	// 하는 연산자입니다.

	// char x1 = 9; // [0][0][0][0][1][0][0][1]
	// char y1 = 13; // [0][0][0][0][1][1][0][1]
	//               // ------------------------
	//               // [0][0][0][0][1][0][0][1]
	// 
	// printf("x1과 y1를 AND 연산한 결과 : %d\n", x1 & y1);


#pragma endregion

#pragma region OR 연산자
	// 두개의 피 연산자 중에 하나라도 1이 있다면
	// 1을 반환하는 연산자입니다.

	// int x2 = 5; // [0][0][0][0][0][1][0][1]
	// int y2 = 17; // [0][0][0][1][0][0][0][1]
	//              // ------------------------------
	//              // [0][0][0][1][0][1][0][1]
	// 
	// printf("x2와 y2를 OR를 연산한 결과: %d\n", x2 | y2);


#pragma endregion

#pragma region XOR 연산자
	// 두 개의 피연산자가 서로 같으면 0을 반환하고,
	// 서로 다르면 1을 반환하는 연산자입니다.

	// int x3 = 14; // [0][0][0][0][1][1][1][0]
	// int y3 = 7; // [0][0][0][0][0][1][1][1]
	//             // -------------------------
	// 			// [0][0][0][0][1][0][0][1] = 9
	// 
	// printf("x3와 y3를 XOR 연산한 결과: %d\n", x3 ^ y3);

#pragma endregion

#pragma region NOT 연산자
	// 비트를 반전시키는 연산자입니다.
	// 첫 번째 비트는 부호를 나타내며, 첫 번째 비트에
	// 1이 있다면 값은 음수가 됩니다.

	// char flag = 16; // [0][0][0][1][0][0][0][0]
	//                 // -------------------------
	//                 // [1][1][1][0][1][1][1][1]
	// 
	// printf("flag를 NOT 연산한 결과: %d\n", ~flag);
#pragma endregion

#pragma endregion


#pragma region 변수

	// 데이터를 저장할 수 있는 메모리 공간을 생성하는 것입니다.

#pragma region 자료형
	// 데이터를 저장하기 위해 데이터의 형태를 정해주는 것입니다.

	// char alphabet = 'A';
	// int integer = 100;
	// float decimal = 15.5f;
	// 
	// alphabet = 'B';
	// integer = 95;
	// decimal = 7.85f;

	// 자료형은 각각의 자료형마다 크기가 정해져 있으며, 자료형의
	// 크기는 바이트 단위로 이루어져 있고, 자료형의 경우 자료형에
	// 따라 저장할 수 있는 값의 종류와 범위가 결정됩니다.


#pragma endregion


#pragma region 서식 지정자
	//// 출력하기 위한 자료형의 정보를 명시적으로 지정해주는 것입니다.
	// 
	//// %c : 문자를 출력하기 위한 서식 지정자
	//printf("alphabet 변수의 값 : %c\n", alphabet);
	//// %d : 정수를 출력하기 위한 서식 지정자
	//printf("integer 변수의 값 : %d\n", integer);
	//// %f : 실수를 출력하기 위한 서식 지정자
	//printf("decimal 변수의 값 : %f\n", decimal);
#pragma endregion

#pragma region 변수의 이름 규칙

	// 1. 변수의 이름은 숫자로 시작할 수 없습니다.
	// ex) int 5day;

	// 2. 변수의 이름은 대소문자를 구분합니다.
	// ex) int data = 100;
	// ex) int DATA = 100;

	// 3.변수의 이름으로 예약어를 사용할 수 없습니다.
	// ex) int int;

	// 4. 변수의 이름으로 공백이 포함될 수 없습니다.
	// ex) int count down;

	// 5. 변수의 이름으로 특수 기회는 _와 $만 허용됩니다.
	// ex) int game_Academy;
	// ex) jump$up;


#pragma endregion


	// 변수는 프로그램이 실행되는 동안 값을 바꿀 수 있으며,
	// 원래 저장되어 있는 값은 새로 저장되는 값에 의해 지워집니다.


#pragma endregion

#pragma region 상수
	// 프로그램이 실행되는 동안 더 이상 변경할 수 없는
	// 메모리 공간입니다.

	const int value = 99;

	// value = 45;

	// 상수의 경우 메모리 공간을 가지고 있지 않은 상수를
	// 리터럴 상수라고 하며, 메모리 공간을 가지고 있는 상수를
	// 심볼릭 상수라고 합니다.



	// 상수는 메모리 공간을 생성하는 동시에 초기화해야 하며,
	// 한 번 저장된 값은 더 이상 변경할 수 없습니다.

#pragma endregion

#pragma region 오버플로우
	// 특정한 자료형이 표현할 수 있는 최대값의 범위를
	// 넘어서 연산을 수행하는 과정입니다.

	// char character = 129;
	// 
	// printf("character 변수의 값 :%d\n", character);

	// 오버플로우는 부호 없는 자료형에서도 똑같이 발생하며,
	// 실수일 때, 오버플로우가 발생하면 infinity라는 값이 출력됩니다.

#pragma endregion

#pragma region 언더플로우
	// 특정한 자료형이 표현할 수 있는 최소값의 범위
	// 를 넘어서 연산을 수행하는 과정입니다.

	// char alphabet = -130;
	// 
	// printf("alphabet의 변수의 값 : %d\n", alphabet);

	// 언더플로우는 부호 없는 자료형에서도 똑같이 발생
	// 하며, 실수일 때 언더플로우가 발생하면 0이라는 값이 출력됩니다.
#pragma endregion

#pragma region 시프트 연산자
	// 비트의 위치를 오른쪽 또는 왼쪽으로 특정한 수만큼
	// 이동시키는 연산자입니다.

	// int x = 10;
	// int y = 12;
	// 
	// printf("x의 값을 2번 왼쪽으로 이동한 결과 :%d\n", x << 2);
	// printf("y의 값을 2번 오른쪽으로 이동한 결과: %d\n", y >> 2);

#pragma endregion

#pragma region 산술 연산자
	 
	// int result 1 <- 변수 + 변수
	// int result 2 <- 리터럴 상수 - 변수 
	// int result 3 <- 심볼릭 상수 * 리터럴 상수
	// int result 4 <- 리터럴 상수 / 리터럴 상수
	// int result 5 <- 심볼릭 상수 % 심볼릭 상수

	// int data = 10;
	// const int constant = 10;
	// 
	// int result1 = data + data;
	// int result2 = 15 - data;
	// int result3 = constant * 5;
	// int result4 = 15 / 15;
	// int result5 = constant % constant;
	// 
	// printf("result1의 변수의 값 : %d\n", result1);
	// printf("result2의 변수의 값 : %d\n", result2);
	// printf("result3의 변수의 값 : %d\n", result3);
	// printf("result4의 변수의 값 : %d\n", result4);
	// printf("result5의 변수의 값 : %d\n", result5);



#pragma endregion

#pragma region 부호 없는 자료형

	// unsigned short mineral = 65535;
	// 
	// unsigned int gas = -1;
	// 
	// printf("mineral 변수의 값: %d\n", mineral);
	// 
	// printf("gas 변수의 값: %u\n, gas");
	// printf("gas 변수의 값: %d\n, gas");
#pragma endregion


}