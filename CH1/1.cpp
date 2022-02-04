#include <iostream>

int main() 
{
	
	//출력
	std::cout << "Hello, World!!!" << std::endl;
	
	//배열, 포인터
	int arr[10];
	int* parr = arr;

	int abc;
	int* pi = &abc;

	//for문
	int i;

	
	for (i = 0; i < 10; i++) 
	{
		std::cout << i << std::endl;
	}
	//합
	int sum = 0;

	for (int i = 1; i <= 10; i++) 
	{
		sum += i;
	}

	std::cout << "합은 : " << sum << std::endl;

	//while문
	int i2 = 1, sum2 = 0;

	while (i2 <= 10) {
		sum2 += i2;
		i2++;
	}

	std::cout << "합은 : " << sum2 << std::endl;
	
	//if else 구문

	int lucky_number = 7;

	std::cout << "내 수를 맞추어 보세요" << std::endl;

	int user_input;  

	while (1) {
		std::cout << "입력 : ";
		std::cin >> user_input;
		if (lucky_number == user_input) {
			std::cout << "맞추셨습니다~~" << std::endl;
			break;
		}
		else {
			std::cout << "다시 생각해보세요~" << std::endl;
		}
	}

	//switch case 구문

	int user_input2;
	std::cout << "나의 정보를 표시" << std::endl;
	std::cout << "1. 이름 " << std::endl;
	std::cout << "2. 나이 " << std::endl;
	std::cout << "3. 성별 " << std::endl;
	std::cin >> user_input2;

	switch (user_input2) {
	case 1:
		std::cout << "손형민" << std::endl;
		break;

	case 2:
		std::cout << "21 살" << std::endl;
		break;

	case 3:
		std::cout << "남자" << std::endl;
		break;

	default:
		std::cout << "X" << std::endl;
		break;
	}

	return 0;
}
