#include <iostream>
#include <map>

using namespace std;

typedef int (*fibFunc)(int);

template <fibFunc f>
int memoize(int x) {
  static std::map<int, int> cache;
  auto y = cache.find(x);
  if (y != cache.end()) return y->second;
  return cache[x] = f(x);
}

int fib(int n) {
  if (n < 2) return n;
  return memoize<fib>(n - 1) + memoize<fib>(n - 2);
}

int main()
{
    for(int seqCount = 0; seqCount < 10; seqCount++)
        cout << "fib(" << seqCount << "):" << fib(seqCount) << endl;
    return 0;
}

