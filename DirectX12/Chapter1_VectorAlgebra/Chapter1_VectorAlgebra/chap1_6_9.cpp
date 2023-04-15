#include "codes.h"

const float epsilon = 0.001f;
bool Equals(float lhs, float rhs)
{
	return fabs(lhs - rhs) < epsilon ? true : false;
}

void chap1_6_9()
{
	cout.precision(8);

	if (!XMVerifyCPUSupport())
	{
		cout << "directx math not supported" << endl;
		return;
	}

	XMVECTOR u = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);
	XMVECTOR n = XMVector3Normalize(u);

	float LU = XMVectorGetX(XMVector3Length(n));

	cout << LU << endl;
	if (LU == 1.0f) cout << "Length 1" << endl;
	else cout << "Length not 1" << endl;

	float powLU = powf(LU, 1.0e6f);
	cout << "LU^(10^6) = " << powLU << endl;

	if (Equals(1.0f, LU)) cout << "Length 1" << endl;
	else cout << "Length not 1" << endl;

	if (XMVector3NearEqual(u, n, XMVectorReplicate(0.001f))) cout << "Vector equal" << endl;
	else cout << "Vector not equal" << endl;
}