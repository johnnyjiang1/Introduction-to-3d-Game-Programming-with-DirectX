#pragma once

#include <windows.h>
#include <DirectXMath.h>
#include <DirectXPackedVector.h>
#include <iostream>

using namespace std;
using namespace DirectX;
using namespace DirectX::PackedVector;

ostream& XM_CALLCONV operator << (ostream& os, FXMVECTOR v);
ostream& XM_CALLCONV operator << (ostream& os, FXMMATRIX m);

void chap2_8_3();