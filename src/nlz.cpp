int nlz(unsigned int x) {
	union {
		unsigned int as_uint32;
		float        as_float;
	} data;
	data.as_float = (float)x + 0.5;
	int n = 158 - (data.as_uint32 >> 23);
	return n;
}
