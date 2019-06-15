#include <stdio.h>

#define LIMIT 20
#define DIVISOR 1000000007

#define READ_INT(_x)					\
  {							\
    int _tmp = 0;					\
    register int _ch = getchar_unlocked();		\
    while (_ch < 48 || _ch > 57)			\
      _ch = getchar_unlocked();				\
    while (48 <= _ch && _ch <= 57)			\
      {							\
	_tmp = (_tmp << 3) + (_tmp << 1) + _ch - 48;	\
	_ch = getchar_unlocked();			\
      }							\
    (_x) = _tmp;					\
  }							\

char _str[10];
#define WRITE_INT(_x)				\
  {						\
    register int _i = 0;			\
    int _tmp = (_x);				\
    do						\
      {						\
	*(_str + _i++) = _tmp % 10 + 48;	\
	_tmp /= 10;				\
      } while (_tmp != 0);			\
    for (_i--; _i >= 0; _i--)			\
      putchar_unlocked(*(_str + _i));		\
  }						\

int main(void)
{
  int a[LIMIT];
  long long p, tmp;
  int i, n, t;

  for (*a = p = 4, i = 1; i < LIMIT; i++)
    {
      p = tmp = p * p % DIVISOR;
      p = p * p % DIVISOR;
      p = p * p % DIVISOR;
      *(a + i) = p = p * tmp % DIVISOR;
    }

#ifdef DEBUG
  printf("a: ");
  for (i = 0; i < LIMIT; i++)
    printf("%d ", *(a + i));
  printf("\n");
#endif

  READ_INT(t);
  while (t--)
    {
      READ_INT(n);
      for (p = 1, i = 0; n > 0; n >>= 1, i++)
	if ((n & 0x1) != 0)
	  p = *(a + i) * p % DIVISOR;

      WRITE_INT(p);
      putchar_unlocked('\n');
    }

  return 0;
}
