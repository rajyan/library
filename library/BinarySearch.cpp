auto judge = [&](int idx, int key) {
	return idx >= key;
};

auto biSearch = [&](auto f, int key) {
	int ng = -1;
	int ok = (int)S.size();

	while (abs(ok - ng) > 1) {
		int mid = (ok + ng) / 2;

		if (f(mid, key)) ok = mid;
		else ng = mid;
	}

	return ok;
};
