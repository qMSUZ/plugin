#ifndef __uVector_h__
#define __uVector_h__

template <typename T, size_t v_size>
struct uVector {

    unsigned int size;

    uVector() { size = v_size; };

    T m[ v_size ];

    T& operator[](const size_t idx) { return m[idx]; };
    const T& operator[](const size_t idx) const { return m[idx]; };

};

#endif // __uVector_h__
