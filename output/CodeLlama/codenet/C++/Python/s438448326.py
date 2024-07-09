#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main() {
	int A, B, C, D, E, F;
	cin >> A >> B >> C >> D >> E >> F;

	int m1 = 0, m2 = 0;
	float maxD = 0.f;
	for (size_t i = 0; 100*A*i <= F; i++)
	{
		int mA = 100 * A*i;
		for (size_t j = 0; mA+100*B*j <= F; j++)
		{
			int mB = 100 * B*j;
			for (size_t k = 0; mA+mB+C*k <= F; k++)
			{
				int mC = C*k;
				for (size_t l = 0; mA+mB+mC+D*l <= F; l++)
				{
					int mD = D*l;
					if ((mA + mB)*E / 100 < mD + mC) {
						break;
					}
					float d = (float)(mD + mC) / (float)(mA + mB + mC + mD);
					if (d > maxD) {
						m1 = mA + mB + mC + mD;
						m2 = mC + mD;
						maxD = d;
					}
				}

			}
		}

	}
	if (m1 == 0) {
		m1 = 100 * A;
	}
	cout << m1 << " " << m2 << endl;
	return 0;
}