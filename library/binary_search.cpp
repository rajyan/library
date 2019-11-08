
auto judge = [&](auto idx, auto key) {
	return idx >= key;
};

auto binary_search = [&](auto f, auto key) {
	
	auto ng = -1;
	auto ok = ;

	while (abs(ok - ng) > 1) {
		int mid = (ok + ng) / 2;

		if (f(mid, key)) ok = mid;
		else ng = mid;
	}

	return ok;
};
