class Solution {
public:
  int fib(int n) {
    int result = 0;
    
    //. 这个if挺妙的，我当时写了俩if，很蠢。
    if (n == 0 || n == 1)
      return n;
    else {
      result = fib(n-1) + fib(n-2);
      return result;
    }
  }
};
