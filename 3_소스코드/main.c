#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int userChoice, computerChoice;
    const char *choices[] = {"가위", "바위", "보"}; // 배열에 "가위", "바위", "보" 저장

    srand(time(NULL)); // 랜덤 시드 초기화

    // 사용자 입력 받기
    printf("가위(0), 바위(1), 보(2)를 선택하세요: ");
    scanf("%d", &userChoice);

    if (userChoice < 0 || userChoice > 2) {
        printf("잘못된 입력\n");
        return 1;

    }

    // 컴퓨터의 선택
    computerChoice = rand() % 3;

    // 결과 출력
    printf("당신: %s, 컴퓨터: %s\n", choices[userChoice], choices[computerChoice]);
    if (userChoice == computerChoice) printf("비겼습니다!\n");
    else if ((userChoice == 0 && computerChoice == 2) ||
             (userChoice == 1 && computerChoice == 0) ||
             (userChoice == 2 && computerChoice == 1))
        printf("당신이 이겼습니다!\n");
    else printf("컴퓨터가 이겼습니다!\n");

    return 0;
}
