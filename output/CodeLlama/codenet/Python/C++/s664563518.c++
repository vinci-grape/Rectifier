#include <bits/stdc++.h>
using namespace std;

#define I(x) scanf("%d", &x)
#define MI(x, y) scanf("%d %d", &x, &y)
#define LI(x) scanf("%ld", &x)
#define LLI(x) scanf("%lld", &x)
#define S(x) scanf("%s", x)
#define SS(x, y) scanf("%s %s", x, y)
#define RI(x) scanf("%d", &x)
#define RMI(x, y) scanf("%d %d", &x, &y)
#define RLI(x) scanf("%ld", &x)
#define RLLI(x) scanf("%lld", &x)
#define RS(x) scanf("%s", x)
#define RSS(x, y) scanf("%s %s", x, y)
#define PI(x) printf("%d\n", x)
#define PII(x, y) printf("%d %d\n", x, y)
#define PLLI(x) printf("%lld\n", x)
#define PLLLI(x, y) printf("%lld %lld\n", x, y)
#define PS(x) printf("%s\n", x)
#define PSS(x, y) printf("%s %s\n", x, y)
#define PB(x) push_back(x)
#define PIIB(x, y) push_back(PII(x, y))
#define PBV(x) push_back(x)
#define PBVV(x, y) push_back(PBV(x, y))
#define PBM(x, y) push_back(PBM(x, y))
#define PBVM(x, y) push_back(PBVM(x, y))
#define PBVVV(x, y, z) push_back(PBVV(x, y, z))
#define PBVMV(x, y, z) push_back(PBVMV(x, y, z))
#define PBVVM(x, y, z) push_back(PBVVM(x, y, z))
#define PBVMVM(x, y, z) push_back(PBVMVM(x, y, z))
#define PBVVVM(x, y, z) push_back(PBVVVM(x, y, z))
#define PBVMVMV(x, y, z) push_back(PBVMVMV(x, y, z))
#define PBVVVMV(x, y, z) push_back(PBVVVMV(x, y, z))
#define PBVMVMVM(x, y, z) push_back(PBVMVMVM(x, y, z))
#define PBVVVMVM(x, y, z) push_back(PBVVVMVM(x, y, z))
#define PBVMVMVMV(x, y, z) push_back(PBVMVMVMV(x, y, z))
#define PBVVVMVMV(x, y, z) push_back(PBVVVMVMV(x, y, z))
#define PBVMVMVMVM(x, y, z) push_back(PBVMVMVMVM(x, y, z))
#define PBVVVMVMVM(x, y, z) push_back(PBVVVMVMVM(x, y, z))
#define PBVMVMVMVMV(x, y, z) push_back(PBVMVMVMVMV(x, y, z))
#define PBVVVMVMVMV(x, y, z) push_back(PBVVVMVMVMV(x, y, z))
#define PBVMVMVMVMVM(x, y, z) push_back(PBVMVMVMVMVM(x, y, z))
#define PBVVVMVMVMVM(x, y, z) push_back(PBVVVMVMVMVM(x, y, z))
#define PBVMVMVMVMVMV(x, y, z) push_back(PBVMVMVMVMVMV(x, y, z))
#define PBVVVMVMVMVMV(x, y, z) push_back(PBVVVMVMVMVMV(x, y, z))
#define PBVMVMVMVMVMVM(x, y, z) push_back(PBVMVMVMVMVMVM(x, y, z))
#define PBVVVMVMVMVMVM(x, y, z) push_back(PBVVVMVMVMVMVM(x, y, z))
#define PBVMVMVMVMVMVMV(x, y, z) push_back(PBVMVMVMVMVMVMV(x, y, z))
#define PBVVVMVMVMVMVMV(x, y, z) push_back(PBVVVMVMVMVMVMV(x, y, z))
#define PBVMVMVMVMVMVMVM(x, y, z) push_back(PBVMVMVMVMVMVMVM(x, y, z))
#define PBVVVMVMVMVMVMVM(x, y, z) push_back(PBVVVMVMVMVMVMVM(x, y, z))
#define PBVMVMVMVMVMVMVMV(x, y, z) push_back(PBVMVMVMVMVMVMVMV(x, y, z))
#define PBVVVMVMVMVMVMVMV(x, y, z) push_back(PBVVVMVMVMVMVMVMV(x, y, z))
#define PBVMVMVMVMVMVMVMVM(x, y, z) push_back(PBVMVMVMVMVMVMVMVM(x, y, z))
#define PBVVVMVMVMVMVMVMVM(x, y, z) push_back(PBVVVMVMVMVMVMVMVM(x, y, z))
#define PBVMVMVMVMVMVMVMVMV(x, y, z) push_back(PBVMVMVMVMVMVMVMVMV(x, y, z))
#define PBVVVMVMVMVMVMVMVMV(x, y, z) push_back(PBVVVMVMVMVMVMVMVMV(x, y, z))
#define PBVMVMVMVMVMVMVMVMVM(x, y, z) push_back(PBVMVMVMVMVMVMVMVMVM(x, y, z))
#define PBVVVMVMVMVMVMVMVMVM(x, y, z) push_back(PBVVVMVMVMVMVMVMVMVM(x, y, z))
#define PBVMVMVMVMVMVMVMVMVMV(x, y, z) push_back(PBVMVMVMVMVMVMVMVMVMV(x, y, z))
#define PBVVVMVMVMVMVMVMVMVMV(x, y, z) push_back(PBVVVMVMVMVMVMVMVMVMV(x, y, z))
#define PBVMVMVMVMVMVMVMVMVMVM(x, y, z) push_back(PBVMVMVMVMVMVMVMVMVMVM(x, y, z))
#define PBVVVMVMVMVMVMVMVMVMVM(x, y, z) push_back(PBVVVMVMVMVMVMVMVMVMVM(x, y, z))
#define PBVMVMVMVMVMVMVMVMVMVMV(x, y, z) push_back(PBVMVMVMVMVMVMVMVMVMVMV(x, y, z))
#define PBVVVMVMVMVMVMVMVMVMVMV(x, y, z) push_back(PBVVVMVMVMVMVMVMVMVMVMV(x, y, z))
#define PBVMVMVMVMVMVMVMVMVMVMVM(x, y, z) push_back(PBVMVMVMVMVMVMVMVMVMVMVM(x, y, z))
#define PBVVVMVMVMVMVMVMVMVMVMVM(x, y, z) push_back(PBVVVMVMVMVMVMVMVMVMVMVM(x, y, z))
#define PBVMVMVMVMVMVMVMVMVMVMVMV(x, y, z) push_back(PBVMVMVMVMVMVMVMVMVMVMVMV(x, y, z))
#define PBVVVMVMVMVMVMVMVMVMVMVMV(x, y, z) push_back(PBVVVMVMVMVMVMVMVMVMVMVMV(x, y, z))
#define PBVMVMVMVMVMVMVMVMVMVMVMVM(x, y, z) push_back(PBVMVMVMVMVMVMVMVMVMVMVMVM(x, y, z))
#define PBVVVMVMVMVMVMVMVMVMVMVMVM(x, y, z) push_back(PBVVVMVMVMVMVMVMVMVMVMVMVM(x, y, z))
#define PBVMVMVMVMVMVMVMVMVMVMVMVMV(x, y, z) push_back(PBVMVMVMVMVMVMVMVMVMVMVMVMV(x, y, z))
#define PBVVVMVMVMVMVMVMVMVMVMVMVMV(x, y, z) push_back(PBVVVMVMVMVMVMVMVMVMVMVMVMV(x, y, z))
#define PBVMVMVMVMVMVMVMVMVMVMVMVMVM(x, y, z) push_back(PBVMVMVMVMVMVMVMVMVMVMVMVMVM(x, y, z))
#define PBVVVMVMVMVMVMVMVMVMVMVMVMVM(x, y, z) push_back(PBVVVMVMVMVMVMVMVMVMVMVMVMVM(x, y, z))
#define PBVMVMVMVMVMVMVMVMVMVMVMVMVMV(x, y, z) push_back(PBVMVMVMVMVMVMVMVMVMVMVMVMVMV(x, y, z))
#define PBVVVMVMVMVMVMVMVMVMVMVMVMVMV(x, y, z) push_back(PBVVVMVMVMVMVMVMVMVMVMVMVMVMV(x, y, z))
#define PBVMVMVMVMVMVMVMVMVMVMVMVMVMVM(x, y, z) push_back(PBVMVMVMVMVMVMVMVMVMVMVMVMVMVM(x, y, z))
#define PBVVVMVMVMVMVMVMVMVMVMVMVMVMVM(x, y, z) push_back(PBVVVMVMVMVMVMVMVMVMVMVMVMVMVM(x, y, z))
#define PBVMVMVMVMVMVMVMVMVMVMVMVMVMVMV(x, y, z) push_back(PBVMVMVMVMVMVMVMVMVMVMVMVMVMVMV(x, y, z))
#define PBVVVMVMVMVMVMVMVMVMVMVMVMVMVMV(x, y, z) push_back(PBVVVMVMVMVMVMVMVMVMVMVMVMVMVMV(x, y, z))
#define PBVMVMVMVMVMVMVMVMVMVMVMVMVMVMVM(x, y, z) push_back(PBVMVMVMVMVMVMVMVMVMVMVMVMVMVMVM(x, y, z))
#define PBVVVMVMVMVMVMVMVMVMVMVMVMVMVMVM(x, y, z) push_back(PBVVVMVMVMVMVMVMVMVMVMVMVMVMVMVM(x, y, z))
#define PBVMVMVMVMVMVMVMVMVMVMVMVMVMVMVMV(x, y, z) push_back(PBVMVMVMVMVMVMVMVMVMVMVMVMVMVMVMV(x, y, z))
#define PBVVVMVMVMVMVMVMVMVMVMVMVMVMVMVMV(x, y, z) push_back(PBVVVMVMVMVMVMVMVMVMVMVMVMVMVMVMV(x, y, z))
#define PBVMVMVMVMVMVMVMVMVMVMVMVMVMVMVMVM(x, y, z) push_back(PBVMVMVMVMVMVMVMVMVMVMVMVMVMVMVMVM(x, y, z))
#define PBVVVMVMVMVMVMVMVMVMVMVMVMVMVMVMVM(x, y, z) push_back(PBVVVMVMVMVMVMVMVMVMVMVMVMVMVMVMVM(x, y, z))
#define PBVMVMVMVMVMVMVMVMVMVMVMVMVMVMVMVMV(x, y, z) push_back(PBVMVMVMVMVMVMVMVMVMVMVMVMVMVMVMVMV(x, y, z))
#define PBVVVMVMVMVMVMVMVMVMVMVMVMVMVMVMVMV(x, y, z) push_back(PBVVVMVMVMVMVMVMVMVMVMVMVMVMVMVMVMV(x, y, z))
#define PBVMVMVMVMVMVMVMVMVMVMVMVMVMVMVMVMVM(x, y, z) push_back(PBVMVMVMVMVMVMVMVMVMVMVMVMVMVMVMVMVM(x, y, z))
#define PBVVVMVMVMVMVMVMVMVMVMVMVMVMVMVMVMVM(x, y, z) push_back(PBVVVMVMVMVMVMVMVMVMVMVMVMVMVMVMVMVM(x, y, z))
#define PBVMVMVMVMVMVMVMVMVMVMVMVMVMVMVMVMVMV(x, y, z) push_back(PBVMVMVMVMVMVMVMVMVMVMVMVMVMVMVMVMVMV(x, y, z))
#define PBVVVMVMVMVMVMVMVMVMVMVMVMVMVMVMVMVMV(x, y, z) push_back(PBVVVMVMVMVMVMVMVMVMVMVMVMVMVMVMVMVMV(x, y, z))
#define PBVMVMVMVMVMVMVMVMVMVMVMVMVMVMVMVMVMVM(x, y, z) push_back(PBVMVMVMVMVM