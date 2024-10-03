// reference : stackoverflow.com/questions/64681747/assigning-an-integer-value-as-binary-to-a-variable-in-c

#include <stdio.h>

#define TO_BIN(x) ((x)-'0')
#define BINARIFY(val, n) (TO_BIN(val) << n)
#define BIN8(n) ( \
  BINARIFY(n[0], 7) + \
  BINARIFY(n[1], 6) + \
  BINARIFY(n[2], 5) + \
  BINARIFY(n[3], 4) + \
  BINARIFY(n[4], 3) + \
  BINARIFY(n[5], 2) + \
  BINARIFY(n[6], 1) + \
  BINARIFY(n[7], 0) )

#define BIN(n) _Generic((n), int: sizeof(#n)==9 ? BIN8(#n) : 0 )

int main (void)
{
    printf("%d\n", BIN(00001111)); //  15
    printf("%d\n", BIN(10000000)); // 128
    printf("%d\n", BIN(10101011)); // 171
}
