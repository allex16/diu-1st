// #include -> including library/header files
// stdio -> header file that works with standard input and output

#include <stdio.h>

void calculate(int x, int y);
int zog(int x, int y);
int biyog(int x, int y);
int goon(int x, int y);
int vaag(int x, int y);
int vaagshesh(int x, int y);
void end();

int main()
{
  int x, y;
  printf("Enter 2 numbers: ");
  scanf("%d %d", &x, &y);
  calculate(x, y);
  return 0;
}

// functions
void ask_to_do()
{
  printf("Select: ");
  printf("1. zog\n2. biyog\n3. goon\n4. vaag\n5. vaagshesh\n6. exit\n");
}

void calculate(int x, int y)
{
  int result;
  ask_to_do();
  int select;
  scanf("%d", &select);

  switch (select)
  {
  case 1:
    result = zog(x, y);
    break;
  case 2:
    result = biyog(x, y);
    break;
  case 3:
    result = goon(x, y);
    break;
  case 4:
    result = vaag(x, y);
    break;
  case 5:
    result = vaagshesh(x, y);
    break;
  case 6:
    end();
    break;
  default:
    end();
  }

  printf("%d\n", result);
}

void end()
{
  printf("Exiting....");
}

int zog(int x, int y)
{
  return (x + y);
}

int biyog(int x, int y)
{
  return (x - y);
}

int goon(int x, int y)
{
  return (x * y);
}

int vaag(int x, int y)
{
  return (x / y);
}

int vaagshesh(int x, int y)
{
  return (x % y);
}
