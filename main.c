#include <Windows.h>
#include <stdio.h>

int main() {
  char ps[100];
  printf_s("|| Printing Helper || Made By github.com/Annihilatorrrr !\n\nEnter "
           "the password:\n");
  scanf_s("%s", &ps);
  if (strcmp(ps, "heck") == 0) {
    printf_s("Access Granted!\n");
    strcpy(ps, "");
    system("pause");
  } else {
    printf_s("Access Denied!\n");
    system("pause");
    return 403;
  }
  while (1) {
    system("cls");
    fflush(stdin);
    FILE *f;
    char c[8], d[8], e[2];
    int a, b, i;
    printf_s("|| Printing Helper || Made in C || By github.com/Annihilatorrrr "
             "!\nMade for use in 100000 pages capacity printers only!\n\nEnter "
             "the starting page number to be printed:\n");
    scanf_s("%d", &a);
    if (a > 100000 || a <= 0) {
      printf_s(
          "Invalid Input; try again, try to give some valid input!\nYour input "
          "was greater than 100000 or lower than 0 or equal to 0!\n");
      system("pause");
      continue;
    }
    fflush(stdin);
    printf_s("Enter the ending page number to be printed:\n");
    scanf_s("%d", &b);
    if (b > 100000 || b <= 0) {
      printf_s(
          "Invalid Input; try again, try to give some valid input!\nYour input "
          "was greater than 100000 or lower than 0 or equal to 0!\n");
      system("pause");
      continue;
    }
    if (b < a || a == b) {
      printf_s(
          "Invalid Input; try again, try to give some valid input!\nYour "
          "ending page number was same or lower than the first page number!\n");
      system("pause");
      continue;
    }
    f = fopen("TO PRINT.txt", "w");
    sprintf(d, "Printings for %d to %d:\n\nOdds:\n", a, b);
    fputs(d, f);
    for (i = a; i <= b; i++) {
      if (i % 2 != 0) {
        if (i == b - 1 || i == b) {
          snprintf(c, 8, "%d", i);
        } else {
          snprintf(c, 8, "%d, ", i);
        }
        fputs(c, f);
      }
    }
    fputs("\n\nEvens:\n", f);
    for (i = a; i <= b; i++) {
      if (i % 2 == 0) {
        if (i == b - 1 || i == b) {
          snprintf(c, 8, "%d", i);
        } else {
          snprintf(c, 8, "%d, ", i);
        }
        fputs(c, f);
      }
    }
    fclose(f);
    printf_s("Done!\nCheck out the data in the text file named: TO "
             "PRINT(.txt)\nTake the required data from the text file and print "
             "it out before using me again!\n\nDo you want to retry ?\nEnter x "
             "to Exit!\n");
    scanf_s("%s", &e);
    if (e[0] == 'x') {
      break;
    }
  }
  printf_s("\nBye!\nHope you liked using me!\n");
  system("pause");
  return 0;
}
