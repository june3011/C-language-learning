#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
   int bot[3];
   int i, j, ball, strike, out, check, arr[3];
   char answer;
   while (1)
   {
      for (i = 0; i < 3; i++)
      {
         bot[i] = rand() % 9 + 1;
         for (j = 0; j < i; j++)
         {
            if (bot[i] == bot[j])
            {
               i--;
               break;
            }
         }
      }
      printf("야구 게임을 하시겠습니까?(y/n)");
      while (1)
      {
         scanf("%c", &answer);
         getchar();
         if (answer == 'n') return 0;
         else if (answer != 'n' && answer != 'y')
         {
            printf("다시 입력해주세요 : ");
            continue;
         }
         break;
      }
      while (1)
      {
         strike = 0;
         out = 0;
         ball = 0;
         check = 0;
         printf("세 자리 숫자를 입력하세요 : ");
         for (i = 0; i < 3; i++)
            scanf("%d", &arr[i]);
         for (i = 0; i < 3; i++)
         {
            for (j = 0; j < 3; j++)
            {
               if (bot[i] == arr[j] && i != j)
                  ball++;
               else if (bot[i] == arr[j] && i == j)
                  strike++;
               else
                  check++;
            }
            if (check == 3)
               out++;
            check = 0;
         }
         if (strike == 3)
         {
            printf("정답입니다.\n\n");
            break;
         }
         else
         {
            if (strike > 0)
               printf(" %d 스트라이크", strike);
            if (ball > 0)
               printf(" %d 볼", ball);
            if (out > 0)
               printf(" %d 아웃", out);
            printf("입니다.\n\n");
         }
      }
   }
}