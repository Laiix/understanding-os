#include <stdio.h>

int main() {
  //因为舍入，3.14丢失
  float f = (3.14f + 1e10f) - 1e10f;
  printf("(3.14f + 1e10f) - 1e10f --> %f\n", f);
  f = 3.14f + (1e10f - 1e10f);
  printf("3.14f + (1e10f - 1e10f) --> %f\n", f);
  //浮点加法不具有结合性
  //乘法上也不具备分配性
}
