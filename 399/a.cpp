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
  int n, Min = 2e9, Max = -(2e9), tmin = 0, tmax = 0;
  RI(n);
  int nums[110000];
  for (int i = 0;i < n;++ i) {
    RI(nums[i]);
    Min = MIN(Min, nums[i]);
    Max = MAX(Max, nums[i]);
  }
  for (int i = 0;i < n;++ i) {
    if (nums[i] == Min) tmin ++;
    if (nums[i] == Max) tmax ++;
  }
  if (Min == Max) cout << n - tmin << endl;
  else cout << n - tmin - tmax << endl;
  return 0;
}
