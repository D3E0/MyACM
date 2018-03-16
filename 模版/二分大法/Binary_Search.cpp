//============================================================================
//Name�����ֲ������ϡ��½�
//============================================================================
#include <iostream>
#include <cstdio>
using namespace std;
const int MAX;

bool check(long long x) {
	return true;
}

//�Ͻ磬��������ֵ����һ��λ�õĺ���һ��λ��
long long upper_bound() {
	long long low = 0;
	long long high = MAX;
	long long mid;
	while (low < high) {
		mid = (high + low) >> 1;
		if (check(mid)) {
			low = mid + 1;
		} else {
			high = mid;
		}
	}
	return high;
}

//�½�
long long lower_bound() {
	long long low = 0;
	long long high = MAX;
	long long mid;
	while (low < high) {
		mid = (high + low) >> 1;
		if (check(mid)) {
			high = mid;
		} else {
			low = mid + 1;
		}
	}
	return low;
}

int main() {

	return 0;
}

