#include <stdio.h>

void GetNumber(int* p_number){
  do {
    printf("Select a number in the range (1-100): ");
    scanf("%d\n", &*p_number);
  } while(*p_number < 0 || *p_number > 100);
}

void Add(){
  int res = 0;
  int number;
  int* p_Number = &number;
  GetNumber(p_Number);

  for (int i = 1; i <= number; i++) {
    if (i % 3 == 0 || i % 5 == 0) {
      res += i;
    }
  }
  printf("\n%ls\n", &res);
}

void Multiply(){
  int res = 0;
  int number;
  int* p_Number = &number;
  GetNumber(p_Number);

  for (int i = 1; i <= number; i++) {
    if (i % 3 == 0 || i % 5 == 0) {
      res *= i;
    }
  }
  printf("\n%ls\n", &res);
}

void ChooseFunction(){
 int choice;

  printf("Select Add (1) or Multiply (2): ");
  scanf("%d", &choice);

  switch (choice) {
    case 1:
    Add();
    break;
    case 2:
    Multiply();
    break;
    default:
    ChooseFunction();
    break;
  }
}

int main(int argc, char const *argv[]) {
  ChooseFunction();
  return 0;
}
