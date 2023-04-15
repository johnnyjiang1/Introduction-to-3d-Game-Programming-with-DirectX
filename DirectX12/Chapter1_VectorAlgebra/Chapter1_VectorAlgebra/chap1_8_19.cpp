#include "codes.h"

void chap1_8_19()
{
	cout.setf(ios_base::boolalpha);

	if (!XMVerifyCPUSupport())
	{
		cout << "directx math not supported" << endl;
		return;
	}

	XMVECTOR p = XMVectorSet(2.0f, 2.0f, 1.0f, 0.0f);
	XMVECTOR q = XMVectorSet(2.0f, -0.5f, 0.5f, 0.1f);
	XMVECTOR u = XMVectorSet(1.0f, 2.0f, 4.0f, 8.0f);
	XMVECTOR v = XMVectorSet(-2.0f, 1.0f, -3.0f, 2.5f);
	XMVECTOR w = XMVectorSet(0.0f, XM_PIDIV4, XM_PIDIV2, XM_PI);

	cout << "XMVectorAbs(v)            = " << XMVectorAbs(v) << endl;
	cout << "XMVectorCos(w)            = " << XMVectorCos(w) << endl;
	cout << "XMVectorLog(u)            = " << XMVectorLog(u) << endl;
	cout << "XMVectorExp(p)            = " << XMVectorExp(p) << endl;

	cout << "XMVectorPow(u, p)         = " << XMVectorPow(u, p) << endl;
	cout << "XMVectorSqrt(u)           = " << XMVectorSqrt(u) << endl;

	cout << "XMVectorSwizzle(u, 2, 2, 1, 3) = " << XMVectorSwizzle(u, 2, 2, 1, 3) << endl;
	cout << "XMVectorSwizzle(u, 2, 1, 0, 3) = " << XMVectorSwizzle(u, 2, 1, 0, 3) << endl;

	cout << "XMVectorMultiply(u, v)    = " << XMVectorMultiply(u, v) << endl;
	cout << "XMVectorSaturate(q)       = " << XMVectorSaturate(q) << endl;
	cout << "XMVectorMax(p, v)         = " << XMVectorMax(p, v) << endl;
}