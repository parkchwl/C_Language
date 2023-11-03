#include <iostream>
#include <string>

#define MAX_NO 5

using namespace std;

class Board
{
  static int no;
  static string *board;

  Board() {}

public:
  static void add(string t)
  {
    if (no >= MAX_NO)
    {
      cout << "add() 오류!! 공지의 갯수가 " << MAX_NO << "개를 넘을 수 없습니다." << endl;
      cout << endl;
      return;
    }
    board[no++] = t;
  }

  static void del(int i)
  {
    if (i < 0 || i >= no)
    {
      cout << "삭제 실패!! 존재하지 않는 공지입니다." << endl;
      cout << endl;
      return;
    }

    for (int j = i; j < no - 1; ++j)
    {
      board[j] = board[j + 1];
    }
    no--;
  }

  static void clear()
  {
    no = 0;
  }

  static void print()
  {
    cout << "************* 컴퓨터 언어2 게시판입니다. *************" << endl;
    if (no == 0)
    {
      cout << "<게시판에 등록된 공지가 없습니다>" << endl;
    }
    else
    {
      for (int i = 0; i < no; ++i)
      {
        cout << i << ": " << board[i] << endl;
      }
    }
    cout << endl;
  }

  static void modify(int i, string newtext)
  {
    if (i < 0 || i >= no)
    {
      cout << "수정실패!! 존재하지 않는 공지입니다." << endl;
      cout << endl;
      return;
    }

    board[i] = newtext;
  }

  static void initializeBoard()
  {
    board = new string[MAX_NO];
  }

  static void releaseMemory()
  {
    delete[] board;
  }
};

int Board::no = 0;
string *Board::board;

int main()
{
  Board::initializeBoard();

  Board::add("C++ 중간고사 채점결과는 이번주 내로 블랙보드에 공지될 예정입니다");
  Board::add("답안지 확인은 다음주에 합니다");
  Board::print();

  Board::add("PL센터를 아직 방문하지 않은 학생은 다음주까지 최소 1회 방문하기 바랍니다");
  Board::add("6장 실습은 이번주 토요일까지 제출하세요");
  Board::add("수업시간에 확인 받지 못한 경우만 소스 코드 업로드 하시면 됩니다");
  Board::print();

  Board::add("6장 이론과제는 다음주 화요일까지 제출합니다");
  Board::modify(3, "6장 실습은 이번주 금요일까지 제출하세요");
  Board::print();

  Board::del(5);
  Board::del(2);
  Board::del(0);
  Board::print();

  Board::modify(4, "프로그램 제출기한 엄수바랍니다");
  Board::add("실습 과제 수행시 PL 센터의 도움을 받을 수 있습니다");
  Board::print();

  Board::clear();
  Board::print();

  Board::releaseMemory();

  return 0;
}
