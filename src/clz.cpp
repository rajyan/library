int clz(unsigned int x) {
    union {
        unsigned int as_uint32;
        float as_float;
    } data{};
    data.as_float = (float)x + 0.5f;
    int n = 158 - (int)(data.as_uint32 >> 23);
    return n;
}
