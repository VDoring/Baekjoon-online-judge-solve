#include <stdio.h>
int main() {
	int user_month, user_days; //유저가 입력한 달과 일수를 받는 변수
	int total_days = 0; //총 일수(월+일 합쳐서)
	char Monthlist[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 }; //달마다 몇일이 마지막인지 나열

	scanf("%d %d", &user_month, &user_days); //유저의 월, 일 입력

	for (int i = 1; i < user_month; i++) { //유저가 입력한 월의 수만큼 반복.
											//Q. 왜 i가 1로 시작되나요?
											//A. i를 0으로 하면 1월 1일인 경우에도 1월의 날짜를 모두 더하거든요. 본래는 2월 이상으로 가야 1월의 날자를 모두 더하는게 맞기때문에 i를 0으로 하면 안되요.

		total_days += Monthlist[i-1]; //해당 달의 일수를 total_days에 저장.
										//Q. 왜 Monthlist[i]가 아닌 Monthlist[i-1]인가요?
										//A. 위의 주석을 보면 알겠지만 i를 1로 초기화하였죠? 배열은 0부터 시작하기때문에 그냥 i(1)을 넣게된다면 2월달부터 더해지기 때문에 마이너스 1을 넣어주는거랍니다.
	}
	total_days += user_days; //유저가 입력한 일수를 total_days에 저장.

	switch (total_days % 7) { //총 일수를 7로 나눈 나머지. 나온 값에 다라 요일이 결정됨.
	case 0:
		printf("SUN");
		break;
	case 1:
		printf("MON");
		break;
	case 2:
		printf("TUE");
		break;
	case 3:
		printf("WED");
		break;
	case 4:
		printf("THU");
		break;
	case 5:
		printf("FRI");
		break;
	case 6:
		printf("SAT");
		break;
	}
}