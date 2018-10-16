int ChooseFunction(){
 int choice;

  printf("Select Add (1) or Multiply (2): ");
  scanf("%d\n", choice);

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

int Add(){
  long res = 0;
  int number;
  int *num = number;
  number = GetNumber();

  for (int i = 1; i <= number; i++) {
    if (i % 3 == 0 || i % 5 == 0) {
      res += i;
    }
  }
}

int Multiply(){
  long res = 0;
  GetNumber(number);

  for (int i = 1; i <= number; i++) {
    if (i % 3 == 0 || i % 5 == 0) {
      res *= i;
    }
  }
}

int GetNumber(int *number){
  do {
    printf("Select a number in the range (1-100): ", );
    scanf("%d", &num);
  } while(&num < 0 || &num > 100);
}

int main(int argc, char const *argv[]) {

  return 0;
}
