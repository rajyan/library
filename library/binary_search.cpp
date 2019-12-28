
auto judge = [&](auto idx) {
	return idx;
};

auto binary_search = [&](auto f) {
	
	auto ng = -1;
	auto ok = ;

	while (abs(ok - ng) > 1) {
		auto mid = (ok + ng) / 2;

		if (f(mid, key)) ok = mid;
		else ng = mid;
	}

	return ok;
};
