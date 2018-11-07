int solution(int N) {
	int binaryGap = 0, tempGap = 0;
	int count = 0;

	while (N > 0) {
		if (N % 2 == 0) {
			if (count != 0) {
				tempGap++;
			}
		}
		else {
			count++;
			if (binaryGap < tempGap) {
				binaryGap = tempGap;
			}
			tempGap = 0;
		}
		N = N / 2;
	}
	if (count == 1)
		return 0;
	return binaryGap;
}