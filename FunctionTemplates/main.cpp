#include <iostream>
#include <map>

using namespace std;

template <typename fibReturn, typename fibIndex, fibReturn f(int)>
fibReturn memoize(fibIndex x) {
  static std::map<fibIndex, fibReturn> cache;
  auto y = cache.find(x);
  if (y != cache.end()) return y->second;
  return cache[x] = f(x);
}

int fib(int n) {
  if (n < 2) return n;
  return memoize<int, int, fib>(n - 1) + memoize<int, int, fib>(n - 2);
}

int main()
{
    for(int seqCount = 0; seqCount < 10; seqCount++)
        cout << "fib(" << seqCount << "):" << fib(seqCount) << endl;
    return 0;
}

