#include <algorithm>
#include <ostream>

/*
 *https://stackoverflow.com/a/25293553/19605126
this guy wrote his own string stream class because the actual one on his mac computer was giving him problems 
actual fucking chad right here, i wanna test his code out
 * */

// BasicInputSequenceBuffer
// ============================================================================

template < typename Char, typename Traits = std::char_traits<Char> >
class BasicInputSequenceBuffer
:   public std::basic_streambuf<Char, Traits>
{
    // Types
    // =====

    private:
    typedef std::basic_streambuf<Char, Traits> Base;

    public:
    typedef typename Base::char_type char_type;
    typedef typename Base::int_type int_type;
    typedef typename Base::pos_type pos_type;
    typedef typename Base::off_type off_type;
    typedef typename Base::traits_type traits_type;
    typedef const char_type* pointer;
    typedef std::size_t size_type;

    // Construction
    // ============

    public:
    BasicInputSequenceBuffer(pointer data, size_type size) {
        // These casts are safe (no modification will take place):
        char* begin = const_cast<char_type*>(data);
        char* end = const_cast<char_type*>(data + size);
        this->setg(begin, begin, end);
    }

    // Stream Buffer Interface
    // =======================

    protected:
    virtual std::streamsize showmanyc();
    virtual std::streamsize xsgetn(char_type*, std::streamsize);
    virtual int_type pbackfail(int_type);

    // Utilities
    // =========

    protected:
    int_type eof() { return traits_type::eof(); }
    bool is_eof(int_type ch) { return ch == eof(); }
};


// Get Area
// ========

template <typename Char, typename Traits>
std::streamsize
BasicInputSequenceBuffer<Char, Traits>::showmanyc() {
    return this->egptr() - this->gptr();
}

template <typename Char, typename Traits>
std::streamsize
BasicInputSequenceBuffer<Char, Traits>::xsgetn(char_type* p, std::streamsize n) {
    std::streamsize result = std::min(n, this->egptr() - this->gptr());
    std::copy(this->gptr(), this->gptr() + result, p);
    this->gbump(result);
    return result;
}

template <typename Char, typename Traits>
typename BasicInputSequenceBuffer<Char, Traits>::int_type
BasicInputSequenceBuffer<Char, Traits>::pbackfail(int_type ch) {
    if(is_eof(ch)) {
        if(this->eback() != this->gptr()) {
            this->gbump(-1);
            return traits_type::to_int_type(*this->gptr());
        }
    }
    return eof();
}

typedef BasicInputSequenceBuffer<char> InputSequenceBuffer;


// BasicInputSequence
//=============================================================================

template < typename Char, typename Traits = std::char_traits<Char> >
class BasicInputSequence
:   public std::basic_istream<Char, Traits>
{
    // Types
    // =====

    private:
    typedef std::basic_istream<Char, Traits> Base;

    public:
    typedef typename Base::char_type char_type;
    typedef typename Base::int_type int_type;
    typedef typename Base::pos_type pos_type;
    typedef typename Base::off_type off_type;
    typedef typename Base::traits_type traits_type;

    private:
    typedef BasicInputSequenceBuffer<Char, Traits> buffer_type;

    public:
    typedef typename buffer_type::pointer pointer;
    typedef typename buffer_type::size_type size_type;

    // Construction
    // ============

    public:
    explicit BasicInputSequence(pointer data, size_type size)
    :   Base(&m_buf), m_buf(data, size)
    {}

    private:
    buffer_type m_buf;
};

typedef BasicInputSequence<char> InputSequence;

#include <iostream>

int main() {
    const char* buffer = "0 3";
    InputSequence stream(buffer, 3);
    std::string a;
    std::string b;
    stream >> a >> b;
    std::cout << "str: '" << a << ' ' << b << "'\n";
    return 0;
}
