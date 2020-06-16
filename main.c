
void print_tri(int n) {

int a;



for ( a = 1; a < n; a++) {
    printf(" ");
    
  }
  
  printf("\n*");
}

int main() {
    
  print_tri(3);
  // 출력
  /*


  *
  **
  *

  
  */

  print_tri(5);
  // 출력
  /*


  *
  **
  ***
  **
  *


  */

  print_tri(6);
  // 출력
  /*


  *
  **
  ***
  ***
  **
  *


  */

}