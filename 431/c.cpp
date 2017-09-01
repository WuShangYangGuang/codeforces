#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <cstdio>
#include <stdlib.h>
#include <cstring>
#include <math.h>
#include <algorithm>
#include <map>
#include <set>
#define PII pair<int, int>
#define PFF pair<float, float>
#define PDD pair<double, double>
#define MP make_pair
#define RI(X) scanf("%d", &(X))
#define RII(X,Y) scanf("%d %d", &(X), &(Y))
#define RD(X) scanf("%lf", &(X))
#define RDD(X,Y) scanf("%lf %lf", &(X), &(Y))
#define RF(X) scanf("%f", &(X))
#define RFF(X,Y) scanf("%f %f", &(X), &(Y))
#define RL(X) scanf("%I64d", &(X))
#define RLL(X,Y) scanf("%I64d %I64d", &(X), &(Y))
#define LL long long 
#define MIN(X,Y) (X)<(Y)?(X):(Y)
#define MAX(X,Y) (X)>(Y)?(X):(Y)
#define INFD 1e32
#define PI 3.14159265358979323
using namespace std;
int main(){
  int n;
  RI(n);
  if (!n) {
    cout << 'a' << endl;
    return 0;
  }
  int cur = 10;
  vector<int> res;
  while(n > 0) {
    cur = (sqrt((double)(n * 8) + 1) - 1) / 2;
    res.push_back(cur);
    n -= cur * (cur + 1) / 2; 
  }
  string ret = "";
  char c = 'a';
  for (int i : res) {
    for (int j = 0;j <= i;++ j) {
      ret += c;
    }
    c ++;
  }
  cout << ret << endl;
  return 0;
}
