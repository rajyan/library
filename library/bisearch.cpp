
auto judge = [&](auto key) {
	return key;
};

auto bisearch = [&](auto f) {
	
	auto ng = -1;
	auto ok = LINF;

	while (abs(ok - ng) > 1) {
		auto mid = (ok + ng) / 2;

		if (f(mid)) ok = mid;
		else ng = mid;
	}

	return ok;
};
