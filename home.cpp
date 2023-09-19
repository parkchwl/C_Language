#include <iostream>
#include <cstdlib>
#include <ctime>
#define SCISSORS 0
#define ROCK 1
#define PAPER 2
using namespace std;

int main()
{
    int computer;
    int you;
    int total = 0, win = 0, tie = 0, lose = 0;
    srand((unsigned int)time(NULL));

    cout << "가위<0>/바위<1>/보<2>/게임종료<-1> 입력: ";
    cin >> you;

    while (you != -1)
    {
        if (you < -1 || you > 2)
        {
            cout << "입력 오류!! 0, 1, 2 또는 -1 입력\n";
        }
        else
        {
            computer = rand() % 3;

            cout << "You: ";
            switch (you)
            {
            case SCISSORS:
                cout << "가위";
                break;
            case ROCK:
                cout << "바위";
                break;
            case PAPER:
                cout << "보";
                break;
            }

            cout << "\t컴퓨터: ";
            switch (computer)
            {
            case SCISSORS:
                cout << "가위";
                break;
            case ROCK:
                cout << "바위";
                break;
            case PAPER:
                cout << "보";
                break;
            }

            if (you == computer)
            {
                cout << "\n무승부\n";
                tie++;
            }
            else if ((you == SCISSORS && computer == PAPER) ||
                     (you == ROCK && computer == SCISSORS) ||
                     (you == PAPER && computer == ROCK))
            {
                cout << "\nYou Win!!\n";
                win++;
            }
            else
            {
                cout << "\nYou Lose!!\n";
                lose++;
            }

            total++;
        }

        cout << "-----------------------------------\n";
        cout << total << "전 " << win << "승 " << tie << "무 " << lose << "패\n";
        cout << "-----------------------------------\n";

        cout << "가위<0>/바위<1>/보<2>/게임종료<-1> 입력: ";
        cin >> you;
    }

    cout << "가위바위보 게임을 종료합니다\n";
    return 0;
}
