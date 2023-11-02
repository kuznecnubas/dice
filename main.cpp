#include <iostream>
#include <time.h>
using namespace std;

void print(char diceSide[3][3]) {
  cout << "+---------+\n";
  for (int i = 0; i < 3; i++) {
    cout << "|";
    for (int j = 0; j < 3; j++) {
      cout << " " << diceSide[i][j] << " ";
    }
    cout << "|\n";
  }
  cout << "+---------+\n";
}

int main() {
  int dice, total = 0;
  string input;
  char one[3][3] = {{' ', ' ', ' '}, {' ', '*', ' '}, {' ', ' ', ' '}};
  char two[3][3] = {{' ', ' ', ' '}, {'*', ' ', '*'}, {' ', ' ', ' '}};
  char three[3][3] = {{'*', ' ', ' '}, {' ', '*', ' '}, {' ', ' ', '*'}};
  char four[3][3] = {{'*', ' ', '*'}, {' ', ' ', ' '}, {'*', ' ', '*'}};
  char five[3][3] = {{'*', ' ', '*'}, {' ', '*', ' '}, {'*', ' ', '*'}};
  char six[3][3] = {{'*', ' ', '*'}, {'*', ' ', '*'}, {'*', ' ', '*'}};
  srand(time(NULL));
  while (true) {
    cout << "Бросить кубик? (д/н): ";
    cin >> input;
    if (input == "д" || input == "l") {
      dice = rand() % 7;
      total += dice;
      switch (dice) {
      case 1:
        print(one);
        cout << "Число нечётное\n"<<endl;
        break;
      case 2:
        print(two);
        cout << "Число чётное\n"<<endl;
        break;
      case 3:
        print(three);
        cout << "Число нечётное\n"<<endl;
        break;
      case 4:
        print(four);
        cout << "Число чётное\n"<<endl; 
        break;
      case 5:
        print(five);
        cout << "Число нечётное\n"<<endl;
        break;
      case 6:
        print(six);
        cout << "Число чётное\n"<<endl; 
        break;
      }
    } else if (input == "н" || input == "y") {
      cout << "\nВы завершили выполнение программы." << endl;
      cout << "Общий счёт: " << total;
      break;
    } else {
      cout << "Некорректный ввод.\n";
    }
  }
}