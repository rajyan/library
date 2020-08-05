
auto judge = [&](auto key) {
	return key;
};

auto binary_search = [&](auto f) {
	
	auto ng = -1;
	auto ok = INF;

	while (abs(ok - ng) > 1) {
		auto mid = (ok + ng) / 2;

		if (f(mid, key)) ok = mid;
		else ng = mid;
	}

	return ok;
};
